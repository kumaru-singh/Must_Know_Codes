// 6️⃣ Iterating Over std::tuple (Doesn’t Work 🚨)
// 🔹 std::tuple is not iterable in C++

#include<iostream>
#include<tuple>
using namespace std;

int main(){
    tuple<int , double, string> data = {42, 3.14, "Hello" };

    // for( auto x: data){ // ❌ ERROR: `tuple` isn't iterable
    //     cout<<x<<" ";
    // }


    // fix
    cout<<get<0>(data)<<" "<<get<1>(data)<<" "<<get<2>(data);
    return 0;
}

// 💡 Why?

// std::tuple doesn’t have iterators!