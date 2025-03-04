// decltype(auto) (C++14)
// C++14 introduced decltype(auto), which deduces the type exactly as decltype would.

#include<iostream>
#include<vector>
using namespace std;

int x = 10;
int &getRef() { return x; }

int main(){
    auto val = getRef();  // val is int (copy)
    declType(auto) ref = getRef();  // ref is int& (reference)

    return 0;
    }

//  🔹 decltype(auto) preserves references and const qualifiers, unlike auto.