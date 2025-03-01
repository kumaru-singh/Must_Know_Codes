// Check if a Number is Even or Odd using Bit Manipulation
#include<iostream>
#include<vector>
using namespace std;

void checkEvenOdd(int num){
    if ( num & 1){
        cout<<num<<" is odd\n";
    } else {
        cout<<num <<" is even\n";
    }
}
  
// Set the bit at a given position
void setBit( int &num, int pos){
    num |= (1<<pos);
}

// clear (unset) a bit at a specific position
void clearBit( int &num, int pos){
    num &= ~(1<<pos);
}

void toggleBit( int &num, int pos){
    num ^= (1<<pos);
}

// count the no of bits set in a number
int countSetBits( int num){
    int count = 0;
    while(num ){
        count++;
        num &= (num -1 );
    }
    return count;
}


void generateSubsets( vector<int> & arr){
    int n = arr.size();
    for ( int mask = 0; mask< (1<<n); mask++){
        cout<<"{";
        for ( int i = 0; i<n; i++){
            if ( mask & ( 1<<i)) // if bit is set , include element
            cout<<arr[i]<<" ";
        }
        cout<<"}\n";
    }

}
int main (){
    // checkEvenOdd(6);
    // checkEvenOdd(7);
    int num = 5;
    vector<int> arr = {1,2,3};
    generateSubsets(arr);

    // setBit(num, 1);
    // setBit(num, 2);

    // clearBit(num, 2);
    // clearBit(num, 0);
    // toggleBit(num, 0);

    // cout << "Set bits in 15: " << countSetBits(15) << endl; // 1111 -> 4
    // cout << "Set bits in 7: " << countSetBits(7) << endl;  // 0111 -> 3
    

    // cout<<num<<endl;
    return 0;
}