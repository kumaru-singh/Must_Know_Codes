// Using auto with Lambda Expressions
// Lambdas often have complex types that are difficult to write explicitly:

#include <iostream>
using namespace std;

int main(){
    auto add = [](int a, int b){ return a + b;};
    cout<<" Sum : "<<add(4,7)<<" ";
    return 0;
}