// Lambda as Function Argument (Useful in STL Algorithms)
// Lambdas are often used as arguments to functions like std::sort, std::for_each, etc.

// Sorting with Lambda

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {5, 2, 8, 1, 3 };
    sort(nums.begin(), nums.end(),[](int a, int b){ return a>b; });
    for(auto num: nums){
        cout<<num<<" ";
    }
    
    return 0;
}


// 🔹 Lambda used as a comparator for sorting in descending order.