//7️⃣ Iterating Over a std::set (No Duplicates Allowed)
// 🔹 Why doesn’t std::set allow duplicates? Let’s check!

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> nums = { 1, 2, 2, 3, 4, 4, 5 };

    for( int x: nums){
        cout<<x<<" ";
    }

    return 0;
}