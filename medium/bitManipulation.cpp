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

int main (){
    checkEvenOdd(6);
    checkEvenOdd(7);

}