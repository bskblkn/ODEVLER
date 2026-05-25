#include "Logger.h"
#include <iostream>
#include <fstream>

using namespace std;

Logger::Logger(string fileName) {
    this->fileName = fileName;
}

void Logger::logPacket(const Packet& packet, const string& result) const {
    ofstream logFile(fileName, ios::app);

    if (logFile.is_open()) {
        logFile << packet.toString() << " -> Result: " << result << endl;
        logFile.close();
    }
    else {
        cout << "Log file could not be opened." << endl;
    }
}

void Logger::showLogs() const {
    ifstream logFile(fileName);

    cout << endl;
    cout << "=== Packet Filtering Logs ===" << endl;

    if (!logFile.is_open()) {
        cout << "No log file found yet." << endl;
        return;
    }

    string line;
    bool isEmpty = true;

    while (getline(logFile, line)) {
        cout << line << endl;
        isEmpty = false;
    }

    if (isEmpty) {
        cout << "Log file is empty." << endl;
    }

    logFile.close();
}