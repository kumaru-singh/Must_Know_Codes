// Mutable Lambdas (Modifying Captured Variables)
// By default, variables captured by value ([=]) cannot be modified inside the lambda. To allow modification, use the mutable keyword:

#include <iostream>
using namespace std;

int main() {
    int x = 10;

    auto lambda = [=]() mutable { x += 5; cout << "Inside lambda: " << x << endl; };

    lambda();
    cout << "Outside lambda: " << x << endl;  // Prints 10 (original `x` remains unchanged)
    return 0;
}


// 🔹 mutable allows the lambda to modify the captured value inside the lambda but does not change the original x.