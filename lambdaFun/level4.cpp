// Capturing Variables in a Lambda
// A lambda can capture variables from its surrounding scope.

// 1. Capture by Value ([=])

#include <iostream>

int main() {
    int x = 10;
    auto lambda = [=]() { std::cout << "x: " << x << std::endl; };

    lambda();  // Prints "x: 10"
    return 0;
}


// 🔹 Captured by value ([=]): The lambda makes a copy of x, so even if x changes, the lambda still holds the original value.

// 2. Capture by Reference ([&])

#include <iostream>

int main() {
    int x = 10;
    auto lambda = [&]() { x += 5; };

    lambda();
    std::cout << "Updated x: " << x << std::endl;  // Prints "Updated x: 15"
    return 0;
}


// 🔹 Captured by reference ([&]): The lambda modifies x directly in the outer scope.


// 3. Mixed Capture ([=, &x] or [&, x])
// You can capture some variables by value and others by reference:

#include <iostream>

int main() {
    int a = 10, b = 20;

    auto lambda = [=, &b]() { b += a; };

    lambda();
    std::cout << "b: " << b << std::endl;  // Prints "b: 30"
    return 0;
}


// 🔹 Capturing [=, &b]:

// a is captured by value (remains unchanged).
// b is captured by reference (modifies the original b).

