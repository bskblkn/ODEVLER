#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include "Packet.h"

using namespace std;

class Logger {
private:
    string fileName;

public:
    Logger(string fileName);

    void logPacket(const Packet& packet, const string& result) const;

    void showLogs() const;
};

#endif
