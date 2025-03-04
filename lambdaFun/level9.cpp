// Lambda in a Class Member Function
// Lambdas can be used inside a class method:

#include <iostream>

class Test {
public:
    void show() {
        auto print = [this]() { std::cout << "Hello from Test class!\n"; };
        print();
    }
};

int main() {
    Test obj;
    obj.show();
    return 0;
}


// 🔹 [this] allows the lambda to capture the current object.

// Conclusion
// Lambda functions are useful for short, unnamed functions.
// They support parameter passing, capturing variables, and inline execution.
// Capture by value ([=]) makes a copy, while capture by reference ([&]) modifies the original.
// Useful in STL algorithms, callbacks, and functional programming.
// Can be mutable, generic, and used inside classes.