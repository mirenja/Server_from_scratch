#include <iostream>
#include <cstring>   // For strerror
#include <cstdlib>   // For exit
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
    //add docstring

    int server_fd,new_socket;
    long valread;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    const int PORT = 8080;
    const char *hello = "Hello from server";

    // Attempt to create a socket file descriptor
    //check if the value of the socket sys call returns val < 0 denotes failure
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        std::cerr << "Cannot create socket: " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }
    //perfom binding
    memset((char *)&address, 0, sizeof(address));
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address))<0)
    {
       std::cerr << "bind failed " << strerror(errno) << std::endl;
       exit(EXIT_FAILURE);
    }
    //listening
    if (listen(server_fd,10) < 0)
    {
        std::cerr << "In listen " << strerror(errno) << std::endl;
        exit(EXIT_FAILURE);
    }
    //accepting
    while(1){
        std::cout << "+++++++ Waiting for new connection ++++++++" << std::endl;
        if((new_socket = accept(server_fd,(struct sockaddr *)&address,(socklen_t*)&addrlen))<0)
        {
            std::cerr << "In accept " << strerror(errno) << std::endl;
            exit(EXIT_FAILURE); 
        }
    //read and write
        char  buffer[30000] = {0};
        valread = read(new_socket, buffer,30000);
        std::cout<<buffer << std::endl;
        write(new_socket,hello,strlen(hello));
        std::cout << "+++++++ Hello message sent ++++++++" << std::endl;
        close(new_socket);
    }
 
    return 0;
}



