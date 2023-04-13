//week 5 q3
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int>& a, vector<int>& b, int n, int m){
    vector<int> result;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i=0, j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            result.emplace_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[i]){
            i++;
        }
        else{
            j++;
        }
    }
    for(auto item: result)  cout<<item<<" ";
    cout<<endl;
}

int main(){
    
    int n, m;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>m;
    vector<int> b(m);
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    solve(a, b, n, m);
    return 0;
}