//9️⃣ "Fu*ked Up" Case: Iterating Over a Nullptr Vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> emptyVector; // Empty Vector

    for( int x: emptyVector)
    cout<<x<<" ";

    cout<<"Loop executed without errors! "<<endl;
    return 0;
}