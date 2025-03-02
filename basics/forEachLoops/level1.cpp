//1️⃣ Basic Iteration Over a Vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = { 5, 8, 6, 9, 2 };

    //Basic for-each loop
    for( int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}