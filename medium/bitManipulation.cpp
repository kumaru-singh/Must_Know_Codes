// Check if a Number is Even or Odd using Bit Manipulation
#include<iostream>
using namespace std;

void checkEvenOdd(int num){
    if ( num & 1){
        cout<<num<<" is odd\n";
    } else {
        cout<<num <<" is even\n";
    }
}

void setBit( int &num, int pos){
    num |= (1<<pos);
}

int main (){
    // checkEvenOdd(6);
    // checkEvenOdd(7);
    int num = 5;

    setBit(num, 1);
    setBit(num, 2);
    cout<<num<<endl;
    return 0;
}