#include "Statistics.h"
#include <iostream>

using namespace std;

Statistics::Statistics() {
    totalPackets = 0;
    allowedPackets = 0;
    deniedPackets = 0;
}

void Statistics::recordResult(const string& result) {
    totalPackets++;

    if (result == "ALLOW") {
        allowedPackets++;
    }
    else if (result == "DENY") {
        deniedPackets++;
    }
}

void Statistics::printStatistics() const {
    cout << endl;
    cout << "=== Packet Filtering Statistics ===" << endl;
    cout << "Total Checked Packets: " << totalPackets << endl;
    cout << "Allowed Packets: " << allowedPackets << endl;
    cout << "Denied Packets: " << deniedPackets << endl;
}