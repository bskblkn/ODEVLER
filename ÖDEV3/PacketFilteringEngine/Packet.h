#ifndef PACKET_H
#define PACKET_H

#include <string>

using namespace std;

class Packet {
private:
    string sourceIP;
    string destinationIP;
    string protocol;
    int port;

public:
    Packet(string sourceIP, string destinationIP, string protocol, int port);

    string getSourceIP() const;
    string getDestinationIP() const;
    string getProtocol() const;
    int getPort() const;

    string toString() const;
    void printPacket() const;
};

#endif