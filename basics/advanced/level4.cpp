// 4️⃣ Modifying Strings While Iterating (Unexpected Results 😵‍💫)
// 🔹 What if we modify a string while iterating over it?

#include<iostream>
using namespace std;

int main(){
    string s = " Hello ";

    for( auto ch:s){
        cout<<s<<" ";
        s+='C'; // // ❌ Changes string while iterating
    }

    return 0;
}


// ⛔ Fix: Don't modify the string inside for-each.