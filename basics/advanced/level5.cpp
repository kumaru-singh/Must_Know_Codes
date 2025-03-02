// 5️⃣ Iterating Over a std::list and Erasing Elements (Iterator Invalidated 🚨)
// 🔹 If you erase elements inside a for-each loop, bad things happen!

#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> nums = {1, 2, 3, 4, 5 };

    for( int &num: nums){
        if( num % 2 == 0){
            nums.remove(num); //  Modifying list while iterating
        }
    }

    return 0;
}