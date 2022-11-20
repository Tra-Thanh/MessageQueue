#include "../headers/foo.h"

Foo::Foo()
{
    initMq();
}

Foo::~Foo()
{
}

void Foo::doSomething()
{
    std::cout << "[Foo.cpp] [doSomething] !!!" << std::endl;
}

void Foo::initMq()
{
    std::cout << "[Foo.cpp] [initMq] !!!" << std::endl;
    attr.mq_flags = 0;
    attr.mq_maxmsg = MAX_MESSAGES;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;
}

bool Foo::startQdServer()
{
    std::cout << "[Foo.cpp] [startQdServer] !!!" << std::endl;

    if ((qd_server = mq_open(SERVER_QUEUE_NAME, O_CREAT | O_RDWR | O_NONBLOCK, QUEUE_PERMISSIONS, &attr)) == -1)
    {
        std::cout << "[Foo.cpp] [startQdServer] error when opening qd_server!!!" << std::endl;
        return false;
    }
    return true;
}

bool Foo::receiveFirstMessageFromClient(){
    std::cout << "[Foo.cpp] [receiveFirstMessageFromClient] !!!" << std::endl;
    // get the oldest message with highest priority
    if (mq_receive(qd_server, in_buffer, MSG_BUFFER_SIZE, 0) == -1)
    {
        std::cout << "[Foo.cpp] [sendMessage] error when receiving available message!!!" << std::endl;
        return false;
    }

    std::cout << "[Foo.cpp] [sendMessage] receiving available message = " << in_buffer << std::endl;
    return true;
}

bool Foo::openQdClient() {
    std::cout << "[Foo.cpp] [openQdClient] !!!" << std::endl;
    // Open client
    if ((qd_client = mq_open(in_buffer, O_WRONLY)) == 1)
    {
        std::cout << "[Foo.cpp] [sendMessage] error when opening qd_client!!!" << std::endl;
        return false;
    }
    return true;
}

bool Foo::sendMessage(const std::string &msg)
{
    std::cout << "[Foo.cpp] [sendMessage] Starting send message to messageQueue msg = " << msg << std::endl;

    strcpy(out_buffer, msg.c_str());

    // send reply message to client
    if (mq_send(qd_client, out_buffer, strlen(out_buffer) + 1, 0) == -1)
    {
        std::cout << "[Foo.cpp] [sendMessage] error when sending message to qd_client!!!" << std::endl;
        return false;
    }

    std::cout << "[Foo.cpp] [sendMessage] sent to messageQueue msg = " << msg << std::endl;
    return true;
}