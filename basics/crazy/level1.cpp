//1️⃣ Iterating Over an Integer (for-each with an int 🚨)
// 🔹 What happens if we accidentally try to iterate over an integer?

#include<iostream>
#include<string>
using namespace std;

int main(){
    int number = 123456;
    string numStr = to_string(number);



    for(auto x: numStr){  //// ❌ ERROR: Can't iterate over an int!
        cout<<x<<" ";
    }
}