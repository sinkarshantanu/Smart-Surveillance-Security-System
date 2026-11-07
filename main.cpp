#include "SecurityCam.h"
#include <iostream>

int main() {
    std::cout << "==================================================\n";
    std::cout << "🛡️ ENTERPRISE SMART SURVEILLANCE RUNTIME SUBSYSTEM\n";
    std::cout << "==================================================\n";

    // Spawning surveillance object with custom activation sensitivity boundaries
    SecurityCam automatedGuard(45.0);
    
    // Booting up the automated frame ingestion loops
    automatedGuard.initializeStream();

    std::cout << "==================================================\n";
    std::cout << "🔒 Stream process session safely concluded.\n";
    return 0;
}
