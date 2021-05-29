#include "rust_externs.h"
#include <iostream>

int main() {
    std::cout << set_and_get("Hi from C!", 500) << std::endl;
}
