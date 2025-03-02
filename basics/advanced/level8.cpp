// 8️⃣ Iterating Over an unordered_map (Random Order 🚨)
// 🔹 unordered_map does NOT guarantee order

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<char, int> freq = {{'a', 5}, {'b', 3}, {'c', 8}};

    for ( auto &[key, val]: freq){
        cout<<key<<" "<<val<<endl;
    }

    return 0;
}