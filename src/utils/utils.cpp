#include <iostream>
#include <windows.h>
#include "../headers/utils/utils.h"

using namespace std;

void log(const string &input, terminal_color_code color = terminal_color_code::white) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
    cout << input << endl;
    SetConsoleTextAttribute(hConsole, terminal_color_code::white);
}


void log(const std::string &input) {
    cout << input << std::endl;
}