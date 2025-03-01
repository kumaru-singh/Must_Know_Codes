#include<iostream>
using namespace std;    

int countSetBits( int num){
    int count = 0;
    while(num>0){
        num = num & (num -1);
        count++;
    }
    return count;
}

int main(){
    int num = 13;
    cout<<countSetBits(num)<<endl;
    return 0;
}