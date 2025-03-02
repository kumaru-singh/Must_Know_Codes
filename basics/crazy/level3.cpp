// 4️⃣ Modifying Elements in a std::set (DOESN’T WORK!)
// 🔹 std::set doesn’t allow modification inside a loop!


#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> nums = {1, 2, 3, 4, 5 };

    // for( int &x:nums){
    //     x*= 10; //
    // }

    return 0;
}

// 💡 Why?

// std::set stores values in sorted order → Modifying them would break the structure
// ⛔ Fix: Copy into a vector, modify it, and create a new set.