#include<iostream>
#include<vector>
using namespace std;

int main(){
    auto x = 10;         // x is deduced as int
    auto y = 3.14;       // y is deduced as double
    auto s = "Hello";    // s is deduced as const char*

    cout << x << " " << y << " " << s << std::endl;
    return 0;

}