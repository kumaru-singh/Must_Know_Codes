//2️⃣ "Infinite Iteration" (Segfault on Large Container 🚨)

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> num = { 1, 3,7};

    for( auto &x : num){
        cout<<" "<<x;
        num.push_back(x+10);  // ❌ Expands while iterating!
    }

    return 0;
}