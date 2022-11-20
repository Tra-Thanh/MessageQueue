#include<bits/stdc++.h>

#include"headers/foo.h"

int main () {
    std::cout << "[main.cpp] Hello From main!!!" << std::endl;

    Foo* foo = new Foo();
    foo->doSomething();

    bool isStartedQdServer = foo->startQdServer();
    if(isStartedQdServer == true) {

        while(true) {
            // Wait until client connected - send first message
            if (foo->receiveFirstMessageFromClient() == true) {
                break;
            }
            sleep(2);
        }

        while (true)
        {
            // Open client in order to send message
            if (foo->openQdClient() == true) {
                break;
            }
            sleep(2);
        }
        
        int msgCount = 0;
        while(msgCount < 10) {
            std::string msg = std::to_string(msgCount);
            if (foo->sendMessage(msg)) {
                msgCount++;
            }
            sleep(2);
        }
    }

    return 0;
}