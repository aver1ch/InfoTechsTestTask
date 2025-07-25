#include "socketLogger.hpp"

#include "importance.hpp"
#include <string>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>
#include <iostream>

SocketLogger::SocketLogger(const std::string& ip, int port, ImportanceLevel importance) : Logger(importance), ip(ip), port(port) {}

void SocketLogger::log(const std::string& message, ImportanceLevel importanceOfMessage) const {
    if (importanceOfMessage < importance) {
        return;
    }

    int sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        std::cerr << "Socket creation failed\n";
        return;
    }

    sockaddr_in server_addr;
    std::memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);

    if (inet_pton(AF_INET, ip.c_str(), &server_addr.sin_addr) <= 0) {
        std::cerr << "Invalid IP address: " << ip << "\n";
        close(sock);
        return;
    }

    if (connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        std::cerr << "Connection to " << ip << ":" << port << " failed\n";
        close(sock);
        return;
    }

    std::string payload = message + " | " + ImportanceLeveltoString(importanceOfMessage) + " | " + getCurrentDateTime() + " | " + "\n";
    if (send(sock, payload.c_str(), payload.length(), 0) < 0) {
        std::cerr << "Failed to send log message\n";
    }

    close(sock);
}
