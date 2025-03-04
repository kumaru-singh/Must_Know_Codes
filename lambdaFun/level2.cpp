// Lambda with Parameters

#include <iostream>

int main() {
    auto add = [](int a, int b) { return a + b; };

    std::cout << "Sum: " << add(5, 10) << std::endl;
    return 0;
}

// 🔹 Here, add is a lambda function that takes two int parameters and returns their sum.

