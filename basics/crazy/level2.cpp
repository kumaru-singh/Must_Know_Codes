// 3️⃣ Iterating Over an std::array with Wrong Size
// 🔹 What if you declare an std::array with size but forget to initialize it?

#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int, 5> arr;  // Uninitialized garbage values!

    for( auto x: arr){
        cout<<x<<" ";
    }

    return 0;
}

// 💡 Why?

// std::array doesn’t auto-initialize values → It contains garbage!

// ⛔ Fix: Initialize it:

// array<int, 5> arr = {0};  // All elements = 0