#include <iostream>
#include "headers/Global_Headers.h"

int main() {
    log("Test Output Default");
    log("Test Output Yellow", terminal_color_code::yellow);
    log("Test Output Green", terminal_color_code::green);
    return 0;
}