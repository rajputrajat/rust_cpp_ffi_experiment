#include "rust_externs.h"
#include <iostream>

int main() {
    const char in_string[] = "Hi from C!";
    std::cout << set_and_get(in_string, 500) << std::endl;
    std::cout << std::hex << &in_string << std::endl;
    std::cout << in_string << std::endl;
}
