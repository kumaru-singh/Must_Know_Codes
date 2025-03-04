// auto and const, &, *
// const auto → Deduces a const value.
// auto& → Deduces a reference (prevents copies).
// auto* → Deduces a pointer.

#include <iostream>

int main() {
    const int x = 42;
    auto y = x;         // y is int (not const)
    const auto z = x;   // z is const int
    auto& ref = x;      // ref is const int& (keeps const)

    std::cout << "y: " << y << "\n";
    std::cout << "z: " << z << "\n";
    std::cout << "ref: " << ref << "\n";

    return 0;

    }   // 🔹 Note: auto drops const unless explicitly stated.