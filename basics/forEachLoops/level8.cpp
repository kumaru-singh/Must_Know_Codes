#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> data = { 3,7,1};
    
    for( auto num: data){
        auto squared = [](int x){ return x*x;};
        cout<<squared(num)<<" "<<endl;
    }
    cout<<endl;

    return 0;
}