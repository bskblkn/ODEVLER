#ifndef FILTERENGINE_H
#define FILTERENGINE_H

#include <vector>
#include <string>
#include "Rule.h"
#include "Packet.h"

using namespace std;

class FilterEngine {
private:
    vector<Rule> rules;
    string defaultAction;

public:
    FilterEngine();

    void addRule(const Rule& rule);

    string evaluate(const Packet& packet) const;

    void printRules() const;
};

#endif
