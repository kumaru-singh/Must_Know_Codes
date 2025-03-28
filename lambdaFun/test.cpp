#include<iostream>
using namespace std;

int fun(int &a, int &b) {
    // int x = a + b;
    int x = fun(a, b);
    return x;
}

int main(){
    int a, b;





}