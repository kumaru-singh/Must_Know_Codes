#include<iostream>
#include<vector>
using namespace std;

// Brute-force recursive function to find LCS Length
// int LCS_BruteForce( string X, string Y, int i, int j){
//     if ( i == 0 || j == 0) return 0; // Base case: if either is empty 

//     if ( X[i-1] == Y[j-1]){
//         return 1 + LCS_BruteForce(X,Y,i-1,j-1); // include character
//     } else {
//         return max(LCS_BruteForce(X, Y, i-1,j), LCS_BruteForce(X,Y,i,j-1));  // Max of iginoring one character
//     }
// }

    // Function to find LCS length using DP
    int LCS_DP(string X, string Y){
        int N = X.length(), M = Y.length();
        vector<vector<int>> dp(N+1, vector<int>(M+1,0));
    

    //Fill DP Table
    for ( int i =1; i <=N; i++){
        for(int j = 1; j<=M; j++){
            if(X[i-1]== Y[j-1]){
                dp[i][j] = 1+dp[i-1][j-1]; // Include Character
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); // Max of ignoring one character
            }
        }
    }  return dp[N][M];  // final LCS length
}

 
int main(){
    string X = "ACDBE";
    string Y = "ABCDE";
    // cout<<"Brute Force LCS Length: "<<LCS_BruteForce(X,Y,X.length(), Y.length())<<endl;
    cout << "DP LCS Length: " << LCS_DP(X, Y) << endl;

    return 0;
}