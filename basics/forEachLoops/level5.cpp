//5️⃣ Iterating Over a Map (Key-Value Pairs)
#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> scores = {{"Alice", 90}, {"Bob", 85}, {"Charlie", 88}};

    for( auto &[name, score]: scores){
        cout<<name<<" scored "<<score<<endl;
    }

    return 0;

}