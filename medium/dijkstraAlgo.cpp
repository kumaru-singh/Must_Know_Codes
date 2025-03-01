#include<iostream>
#include<vector>
#include<queue>
#include<climits>  // For INT_MAX
using namespace std;

// Alias for adjacency list representation of the graph
typedef pair<int, int> pii;   //  (distance, node)

// Function to perform Dijkstra’s Algorithm

void dijkstra( int source, vector<vector<pii>> &adj, vector<int> &dist){
     // Priority queue to get the node with the smallest distance
     priority_queue<pii, vector<pii>, greater<pii>> pq;

     dist[source] = 0;  // set initial distance
     pq.push({0,source});

     //process nodes in Min-heap
     while(!pq.empty()){// Extracts the closest node (currNode) with distance currDist
        int currDist = pq.top().first;
        int currNode = pq.top().second;
        pq.pop();// removes the processed node from the queue


        // if the current distance is greater than recorded, then skip it
        if (currDist > dist[currNode]) continue;

        // Traverse the neighbors of the current node
        for (auto & neighbour: adj[currNode]){
            int nextNode = neighbour.first;
            int edgeWeight = neighbour.second;

            //Update Distance if Shorter Path Found

            if( dist[currNode] + edgeWeight < dist[nextNode]){
               dist[nextNode] = dist[currNode] + edgeWeight;
               pq.push({dist[nextNode], nextNode});
            }
        } //iterates over all neighbors of currNode.
     }  
}


int main(){
    int V = 5; // Number of vertices
    vector<vector<pii>> adj(V); // Adjacency list


    // Adding edges ( unidirectional weighted graphs)
    adj[0].push_back({1,2});
    adj[0].push_back({3,6});
    adj[1].push_back({2,3});
    adj[1].push_back({3,8});
    adj[1].push_back({4,5});
    adj[2].push_back({4,7});



    // Making it unidirectional (bidirectional edges)
    adj[1].push_back({0,2});
    adj[3].push_back({0,6});
    adj[2].push_back({1,3});
    adj[3].push_back({1,8});
    adj[4].push_back({1,5});
    adj[4].push_back({2,7});

    // Distance vector initialized to INF ( maximum value )
    vector<int> dist(V, INT_MAX);


    int source = 0; // starting from node 0
    dijkstra(source, adj, dist);

    // printing shortest distances from source node
    cout<<" Shortest Distance from source node "<<source<<":\n";
    for ( int i = 0; i<V; i++){
        cout<<"Node "<<i<<":"<<dist[i]<<"\n";
    }


    }

