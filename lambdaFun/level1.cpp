// The lambda []() { std::cout << "Hello, World!\n"; }; is assigned to greet, which is later called.

#include <iostream>

int main() {
    auto greet = []() { std::cout << "Hello, World!\n"; };
    greet();  // Calling the lambda function
    return 0;
}
