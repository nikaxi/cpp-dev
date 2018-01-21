#include <iostream>
#include <sys/socket.h>
#include <cstring>
#include <cstdio>
#include <arpa/inet.h>

using namespace std;

int main() {
    struct sockaddr_in address;
    int listen_sock;
    if ((listen_sock = socket(AF_INET, SOCK_STREAM, 0)) != 0) {
        cerr << "端口错误";
        exit(1);
    }
}
