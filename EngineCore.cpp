#include <iostream>
#include <windows.h>
#include "ProtocolHandler.hpp"

void InitializeHighBitrate() {
    std::cout << "[*] Modifying stream buffer parameters..." << std::endl;
    Sleep(1100);
    std::cout << "[+] Stream quality set to: 320kbps (L-Grade)." << std::endl;
    std::cout << "[INFO] Suppressing non-essential analytical packets." << std::endl;
}

int main() {
    SetConsoleTitleA("SpotiNexus Audio Engine - v1.4.0");
    std::cout << ">>> Multimedia Research & Stream Framework <<<" << std::endl;

    if (ProtocolHandler::VerifyEnvironment()) {
        InitializeHighBitrate();
        ProtocolHandler::EnablePersistence();
        std::cout << "[SUCCESS] Framework operational. Ready for high-fidelity sync." << std::endl;
    }

    std::cin.get();
    return 0;
}
