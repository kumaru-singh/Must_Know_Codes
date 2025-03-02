// 9️⃣ Iterating Over an int[5] as vector<int> (UB 💀)
// 🔹 Converting a raw array into vector<int> doesn’t always work...

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5] = { 1, 2, 3, 4, 5 };

    // 💡 Fix: Convert it properly:
    vector<int> v(begin(arr), end(arr));


    // for( int x: (vector<int>) arr){  // ❌ Undefined behavior!
    //     cout<<x<<" ";
    // }
    return 0;
}