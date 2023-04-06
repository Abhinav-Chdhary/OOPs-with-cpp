#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>> adj, int s, int d, int n){
    
}

int main(){
    int n;
    cout<<"Enter the number of edges: ";
    cin>>n;
    vector<vector<int>> adj(n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>adj[i][j];
        }
    }
    int s, d;
    cout<<"Enter source: ";
    cin>>s; s=s-'a';
    cout<<"Enter destination: ";
    cin>>d; d=d-'a';
    dfs(adj, s, d, n);

    return 0;
}