//6️⃣ Iterating Over an Array (C-Style)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
     
    for( int x: arr){
        cout<<x<<" ";
    }

    return 0;

}