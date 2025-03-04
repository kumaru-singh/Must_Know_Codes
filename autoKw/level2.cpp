// Using auto with Iterators
// auto is particularly useful when dealing with complex iterator types in STL containers:

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec ={ 1, 2, 3, 4, 5};
    vector<int>::iterator it = vec.begin();
    // vector<int>::iterator it = vec.begin();

    // with auto
    auto it_auto = vec.begin();

    cout<<" First Element: "<<*it_auto<<" ";
    return 0;
}