// 7️⃣ Using const to Prevent Modification

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> numbers = { 5, 6, 9, 3 };

    for (const int &num : numbers) {
        cout << num << " ";
        // num *= 2;  ❌ ERROR: Cannot modify because of `const`
    }
    cout << endl;

    return 0;

}

