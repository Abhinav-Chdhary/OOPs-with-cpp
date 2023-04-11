#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(vector<int> vec, int n, int z){
    for(int i=0; i<n-1; i++){
            if(vec[i]+vec[i+1]>=z){
                cout<<"NO\n";
                return;
            }
        }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n, 0);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        sort(vec.begin(), vec.end());
        int z = vec[n]+vec[n-1];
        for(int i=0; i<n-1;){
            swap(vec[i], vec[i+1]);
            i+=2;
        }
        solve(vec, n, z);
    }

    return 0;
}
