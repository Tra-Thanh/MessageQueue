#include<bits/stdc++.h>

#include"headers/foo.h"

int main () {
    std::cout << "[main.cpp] Hello From sub!!!" << std::endl;

    Foo* foo = new Foo();
    foo->doSomething();

    bool isStartedQdClient = foo->startQdClient();
    bool isStartedQdServer = foo->startQdServer();

    bool isSentFirstMessage = false;
    if (isStartedQdServer== true && isStartedQdClient) {
        isSentFirstMessage = foo->sendFirstMsgToServer();
    }

    if(isStartedQdServer == true && isStartedQdClient == true && isSentFirstMessage) {
        while (true)
        {
            if (foo->receiveMessageFromServer() == true) {
                foo->disconnectMq();
                std::cout << "[main.cpp ] Exit sub!!!" << std::endl;
                break;
            }
        }
    }

    return 0;
}