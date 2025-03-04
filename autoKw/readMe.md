<!-- Limitations of auto
Cannot Be Used Without Initialization

auto x; // ❌ Error: No initializer, cannot deduce type
Cannot Deduce Multiple Types in One Statement

auto a = 10, b = 3.14; // ❌ Error: Different types (int and double)
Does Not Work with Function Parameters (Use template Instead)

void func(auto x) { }  // ❌ Error: `auto` cannot be used for parameters
✅ Solution: Use template:

template <typename T>
void func(T x) { } -->