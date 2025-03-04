// Using auto with Range-Based For Loops
// C++11 introduced range-based for loops, and auto simplifies iteration:

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {10, 20, 30, 40 };

    // using auto in a range-based loop 
    for( auto num : numbers ){
        cout<<num<<" ";
    }
}