#include <windows.h>
#include <shellapi.h>

#include "Packet.h"
#include "Rule.h"
#include "FilterEngine.h"
#include "Statistics.h"
#include "Logger.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // C++ OOP core test
    // This part proves that Packet, Rule, FilterEngine, Statistics and Logger classes are used.

    FilterEngine engine;
    Statistics statistics;
    Logger logger("log.txt");

    engine.addRule(Rule("ALLOW", "TCP", "192.168.1.10", "ANY", 80));
    engine.addRule(Rule("DENY", "UDP", "ANY", "ANY", 53));
    engine.addRule(Rule("ALLOW", "TCP", "ANY", "10.0.0.8", 443));

    Packet startupPacket("192.168.1.10", "10.0.0.5", "TCP", 80);

    string result = engine.evaluate(startupPacket);

    statistics.recordResult(result);
    logger.logPacket(startupPacket, result);

    // Open the web interface
    HINSTANCE openResult = ShellExecuteA(
        NULL,
        "open",
        "index.html",
        NULL,
        NULL,
        SW_SHOWNORMAL
    );

    if ((INT_PTR)openResult <= 32) {
        MessageBoxA(
            NULL,
            "index.html could not be opened. Make sure index.html is in the project folder.",
            "Error",
            MB_OK | MB_ICONERROR
        );
    }

    return 0;
}