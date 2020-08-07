#include <iostream>
#include "headers/main.h"

int main() {
    log("Test Output Default");
    log("Test Output Yellow", color_code::yellow);
    log("Test Output Green", color_code::green);
    return 0;
}