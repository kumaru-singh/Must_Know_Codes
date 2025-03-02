// 5️⃣ Iterating Over a vector<bool> (Bitfield Madness 🚨)
// 🔹 vector<bool> does NOT store bools as normal data 🤯

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<bool> flags = { true, false, true };

    // for( bool &flag :flags){
    //     flag = !flags; // trying to invert values
    // }

    for (bool flag : flags) {
        cout << flag << " ";
    }

    return 0;
}


// 💡 Why?

// vector<bool> doesn’t store actual bool values → It stores them as bits!
// Fix: Convert to vector<int> instead!