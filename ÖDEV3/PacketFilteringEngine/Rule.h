#ifndef RULE_H
#define RULE_H

#include <string>
#include "Packet.h"

using namespace std;

class Rule {
private:
    string action;
    string protocol;
    string sourceIP;
    string destinationIP;
    int port;

public:
    Rule(string action, string protocol, string sourceIP, string destinationIP, int port);

    bool matches(const Packet& packet) const;

    string getAction() const;

    void printRule() const;
};

#endif
