#include <iostream>
#include "headers/main.h"
#include "headers/enums.h"
#include "headers/utils/utils.h"

int main() {
    log("Test Output Yellow", color_code::yellow);
    log("Test Output Black", color_code::black);
    log("Test Output Green", color_code::green);
    return 0;
}