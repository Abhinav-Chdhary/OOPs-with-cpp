//week 5 q1
#include <iostream>

using namespace std;

void solve(char arr[], int n){
    int occur[26]={0}, res=0;
    char c = '\0';
    for(int i=0; i<n; i++){
        occur[arr[i]-'a']++;
    }
    for(int i=0; i<n; i++){
        if(occur[i]>res){
            res = occur[i];
            c = (char)i+'a';
        }
    }
    if(res>1)
        cout<<c<<" "<<res<<endl;
    else
        cout<<"No duplicates found\n";
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[n];
        for (size_t i = 0; i < n; i++)
        {
            cin>>arr[i];
        }       
        solve(arr, n);
    }
    return 0;
}