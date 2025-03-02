//1️⃣ Iterating Over a nullptr (SIGSEGV CRASH 🚨)

#include<iostream>
using namespace std;

int main(){
    int* ptr = nullptr;

    // for( int x: *ptr){
    //     cout<<x<<"";
    // }

    return 0;
}
