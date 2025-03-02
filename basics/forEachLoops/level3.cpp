//3️⃣ Modifying Elements Using References

#include<iostream>
#include<vector>
using namespace std;

int main(){

    std::vector<int> num = { 1, 2, 3, 4, 5};

    // using reference to modify it 
    for( int& nums: num ){
        cout<<nums*2<<" ";
    }
    return 0;

}