// 9️⃣ Using a for-each Loop Over a std::queue (DOESN’T WORK 🚨)
// 🔹 Why can’t we iterate over a queue?

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    //❌ ERROR: Queues don't support `for-each` loops!
    // for( auto x: q){
    //     cout<<x<<" ";
    // }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}