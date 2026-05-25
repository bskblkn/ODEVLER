#include "Packet.h"
#include <iostream>
#include <sstream>

using namespace std;

Packet::Packet(string sourceIP, string destinationIP, string protocol, int port) {
    this->sourceIP = sourceIP;
    this->destinationIP = destinationIP;
    this->protocol = protocol;
    this->port = port;
}

string Packet::getSourceIP() const {
    return sourceIP;
}

string Packet::getDestinationIP() const {
    return destinationIP;
}

string Packet::getProtocol() const {
    return protocol;
}

int Packet::getPort() const {
    return port;
}

string Packet::toString() const {
    stringstream ss;

    ss << "Packet [";
    ss << "Source IP: " << sourceIP << ", ";
    ss << "Destination IP: " << destinationIP << ", ";
    ss << "Protocol: " << protocol << ", ";
    ss << "Port: " << port;
    ss << "]";

    return ss.str();
}

void Packet::printPacket() const {
    cout << toString();
}