#include"../headers/foo.h"

Foo::Foo() {

}

Foo::~Foo() {

}

void Foo::doSomething() {
    std::cout << "[Foo.cpp] doSomething!!!" << std::endl;
}

void Foo::initMq() {
    std::cout << "[Foo.cpp] [initMq] !!!" << std::endl;
    attr.mq_flags = 0;
    attr.mq_maxmsg = MAX_MESSAGES;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;
}

bool Foo::startQdServer() {
    std::cout << "[Foo.cpp] [startQdServer] !!!" << std::endl;
    if ((qd_server = mq_open(SERVER_QUEUE_NAME, O_RDWR | O_NONBLOCK, &attr)) == -1) {
        std::cout << "[Foo.cpp] [startQdServer] error when opening qd_server!!!" << std::endl;
        return false;
    }
    return true;
}

bool Foo::startQdClient() {
    std::cout << "[Foo.cpp] [startQdClient] !!!" << std::endl;
    if ((qd_client = mq_open(CLIENT_QUEUE_NAME, O_NONBLOCK| O_RDWR | O_CREAT, QUEUE_PERMISSIONS, &attr)) == -1) {
        std::cout << "[Foo.cpp] [startQdClient] error when opening qd_client!!!" << std::endl;
        return false;
    }
    return true;
}

bool Foo::sendFirstMsgToServer(){
    std::cout << "[Foo.cpp] [sendFirstMsgToServer] !!!" << std::endl;
    if (mq_send (qd_server,CLIENT_QUEUE_NAME, strlen(CLIENT_QUEUE_NAME) + 1, 0) == -1) {
        std::cout << "[Foo.cpp] [sendFirstMsgToServer] error when sending first message to server!!!" << std::endl;
        return false;
    }
    return true;
}

bool Foo::receiveMessageFromServer() {
    std::cout << "[Foo.cpp] [receiveMessageFromServer] !!!" << std::endl;
        if (mq_receive(qd_client, in_buffer, MSG_BUFFER_SIZE, MQ_MSG_PRIO) == -1) {
            std::cout << "[Foo.cpp] [receiveMessageFromServer] error when receiving message from server!!!" << std::endl;
            return false;
        }
        std::cout << "[Foo.cpp] [receiveMessageFromServer] in_buffer = " << in_buffer << std::endl;
        std::string msg = in_buffer;
        if (msg == "9") {
            return true;
        }
        return false;
}

bool Foo::disconnectMq() {
    std::cout << "[Foo.cpp] [disconnectMq] !!!" << std::endl;
    if (mq_close(qd_client) == -1) {
        std::cout << "[Foo.cpp] [disconnectMq] error when closing Mq client!!!" << std::endl;
        return false;
    }

    if (mq_unlink(CLIENT_QUEUE_NAME) == -1) {
        std::cout << "[Foo.cpp] [disconnectMq] error when closing Mq client!!!" << std::endl;
        return false;
    }

    return true;
}

