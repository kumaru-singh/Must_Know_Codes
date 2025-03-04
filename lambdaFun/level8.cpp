// Generic Lambdas (C++14)
// In C++14 and later, lambdas support auto parameters for generic programming:

#include <iostream>

int main() {
    auto add = [](auto a, auto b) { return a + b; };

    std::cout << add(5, 2) << std::endl;      // Works with int
    std::cout << add(3.5, 2.1) << std::endl;  // Works with double
    return 0;
}


// 🔹 Generic lambda works with multiple data types (int, double, etc.).

