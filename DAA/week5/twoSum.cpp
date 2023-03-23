//week 5 q2
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve(vector<int> vec, int target){
    unordered_map<int, int> um;
    for(int i=0; i<vec.size(); i++){
        if(um.find(target-vec[i])!=um.end()){
            cout<<vec[i]<<" "<<target-vec[i]<<endl;
            return;
        }
        um[vec[i]] = vec[i];
    }
    cout<<"No such element found\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, target;
        cin>>n;
        vector<int> vec(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        cin>>target;
        solve(vec, target);
    }
    return 0;
}