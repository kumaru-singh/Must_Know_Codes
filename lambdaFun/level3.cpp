// Lambda with Explicit Return Type
// By default, the return type is automatically deduced, but you can specify it explicitly using -> return_type:

#include <iostream>

int main() {
    auto divide = [](int a, int b) -> double { return (double)a / b; };

    std::cout << "Result: " << divide(5, 2) << std::endl;
    return 0;
}

// 🔹 Here, we explicitly define -> double to ensure the return type is double.