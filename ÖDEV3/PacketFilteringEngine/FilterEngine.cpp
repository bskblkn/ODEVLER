#include "FilterEngine.h"
#include <iostream>

using namespace std;

FilterEngine::FilterEngine() {
    defaultAction = "DENY";
}

void FilterEngine::addRule(const Rule& rule) {
    rules.push_back(rule);
}

string FilterEngine::evaluate(const Packet& packet) const {
    for (const Rule& rule : rules) {
        if (rule.matches(packet)) {
            return rule.getAction();
        }
    }

    return defaultAction;
}

void FilterEngine::printRules() const {
    cout << endl;
    cout << "=== Current Filtering Rules ===" << endl;

    for (const Rule& rule : rules) {
        rule.printRule();
        cout << endl;
    }
}