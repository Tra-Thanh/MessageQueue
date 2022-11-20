#ifndef FOO
#define FOO

#include<bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <mqueue.h>

#define SERVER_QUEUE_NAME "/ipcdemoserver"
#define CLIENT_QUEUE_NAME "/ipcdemoclient"
#define QUEUE_PERMISSIONS 0660
#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256
#define MSG_BUFFER_SIZE MAX_MSG_SIZE + 10
#define MQ_MSG_PRIO 0

class Foo {
public:
    Foo();
    ~Foo();

    void doSomething();
    void initMq();
    bool startQdServer();
    bool startQdClient();
    bool sendFirstMsgToServer();
    bool receiveMessageFromServer();
    bool disconnectMq();

private:
    mqd_t qd_client;
    mqd_t qd_server;
    
    struct mq_attr attr;
    char in_buffer [MSG_BUFFER_SIZE];
    char out_buffer [MSG_BUFFER_SIZE];
};

#endif