//🔟 The Ultimate "Fu*ked Up" Case: Modifying a Collection While Iterating

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = { 1,2,6,4,5,3,3,3,8};

    for( auto x: nums){
        if( x == 3){
            nums.push_back(66);
        }
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}