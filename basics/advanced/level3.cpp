//3️⃣ Iterating Over an Empty Map (for-each that does NOTHING)
// 🔹 What if we iterate over a completely empty container?

#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> emptyMap;

    for( auto &[ key, value]: emptyMap){
        cout<<key<<" ->"<<value<<endl;
    }

    cout<<" Loop finished ";

    return 0;
}