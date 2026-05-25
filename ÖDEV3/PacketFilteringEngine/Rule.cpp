#include "Rule.h"
#include <iostream>

using namespace std;

Rule::Rule(string action, string protocol, string sourceIP, string destinationIP, int port) {
    this->action = action;
    this->protocol = protocol;
    this->sourceIP = sourceIP;
    this->destinationIP = destinationIP;
    this->port = port;
}

bool Rule::matches(const Packet& packet) const {
    bool protocolMatches = (protocol == "ANY" || protocol == packet.getProtocol());
    bool sourceMatches = (sourceIP == "ANY" || sourceIP == packet.getSourceIP());
    bool destinationMatches = (destinationIP == "ANY" || destinationIP == packet.getDestinationIP());
    bool portMatches = (port == -1 || port == packet.getPort());

    return protocolMatches && sourceMatches && destinationMatches && portMatches;
}

string Rule::getAction() const {
    return action;
}

void Rule::printRule() const {
    cout << "Rule [";
    cout << action << " ";
    cout << protocol << " ";
    cout << sourceIP << " ";
    cout << destinationIP << " ";

    if (port == -1) {
        cout << "ANY";
    }
    else {
        cout << port;
    }

    cout << "]";
}