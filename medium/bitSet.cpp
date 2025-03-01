#include<iostream>
#include<bitset>
using namespace std;

int main(){
    bitset<8> num(5); // 5 is 101 in binary & 8 is the number of bits
    cout<<num<<endl;
    num.set(1);  // set the bit at position 1
    cout<<num<<endl;

    num.reset(1); // reset the bit at position 1
    cout<<num<<endl;

    num.flip(1); // toggle the bit at position 1
    cout<<num<<endl;

    bitset<8> num2(6); // 6 is 110 in binary
    // bitwise operators
    cout<<"Number of set bits in "<<num2<<" is "<<num2.count()<<endl;
    cout<<"Total no. of bits in "<<num2<<" is "<<num2.size()<<endl;
    cout<<"Any bit set in "<<num2<<" ? "<<num2.any()<<endl;
    cout<<"All bits set in "<<num2<<" ? "<<num2.all()<<endl;
    cout<<"No bit set in "<<num2<<" ? "<<num2.none()<<endl;
    cout<<"Bit at position 2 in "<<num2<<" is "<<num2.test(2)<<endl;

    bitset<8> a("1101");  // 00001101
    bitset<8> b("1011"); // no of bits - 00001011

    cout<<"AND:"<<(a&b)<<endl;
    cout<<"OR:"<<(a | b)<<endl;
    cout<<"XOR"<<(a^b)<<endl;
    cout<<"NOT a"<<(~a)<<endl;

    // BIT shifting
    cout<<" Left Shifting a:"<<(a<<1)<<endl;
    cout<<" Right Shifting b:"<<(b>>1)<<endl;

    //Converting Bitset to Other Data Types

    unsigned long nm = b.to_ulong();
    string str = b.to_string();
    // unsigned long long num = b.to_ullong();

    cout << "Bitset as number: " << nm << endl;
    cout << "Bitset as string: " << str << endl;




    return 0;

}