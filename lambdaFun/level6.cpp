// Lambda with std::function
// If you need to store lambdas dynamically, use std::function:

#include <iostream>
#include <functional>
using namespace std;

int main() {
    function<int(int, int)> multiply = [](int a, int b) { return a * b; };

    cout << "Product: " << multiply(4, 5) <<endl;  // Prints 20
    return 0;
}

// 🔹 std::function<int(int, int)> allows us to store a lambda with two int parameters and an int return type.
