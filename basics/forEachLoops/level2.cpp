//2️⃣ Using auto Instead of Explicit Type

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<double> decimals = { 1.1, 2.2, 3.3};

    for( auto x: decimals){
        cout<<x<<" ";
    }

    return 0;
}