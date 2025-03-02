// 7️⃣ for-each Over a std::priority_queue (Doesn’t Work)
// 🔹 priority_queue has no begin() and end()

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(1);
    pq.push(5);

    // for( auto x: pq){    // ❌ ERROR: `priority_queue` isn't iterable
    //     cout<<x<<" ";
    // }

    vector<int> temp;


    // 💡 Fix: Convert to vector first:

    while(!pq.empty()){
        temp.push_back(pq.top());
        pq.pop();
    }

    for(int x: temp){
        cout<<x<<" ";
    }

    return 0;
}
