#ifndef INFO_H
#define INFO_H

#include <iostream>
//using a struct because its by deafult public, a class is by default private, also added gaurds
struct ServerInfo {
    static void printWelcomeMessage() {
        std::cout << "++++++ Welcome to My Server ++++++++" << std::endl;
        std::cout << "Server is running on port 8080" << std::endl;
        // Add more information if needed
    }

    static void printNewConnectionMessage() {
        std::cout << "+++++++ New Connection Established ++++++++" << std::endl;
    }
};

#endif
