#include <iostream>
#include <windows.h>
#include "../headers/utils/utils.h"

void log(const std::string &input, terminal_color_code color = terminal_color_code::white) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
    std::cout << input << std::endl;
    SetConsoleTextAttribute(hConsole, terminal_color_code::white);
}


void log(const std::string &input) {
    std::cout << input << std::endl;
}