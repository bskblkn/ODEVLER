#ifndef STATISTICS_H
#define STATISTICS_H

#include <string>

using namespace std;

class Statistics {
private:
    int totalPackets;
    int allowedPackets;
    int deniedPackets;

public:
    Statistics();

    void recordResult(const string& result);

    void printStatistics() const;
};

#endif
