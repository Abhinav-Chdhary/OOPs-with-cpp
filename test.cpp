#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int n, ans;
        cin>>n;
        int x = (n-1)/2;
        if(n<3) ans=0;
        else if(n%2){
            ans=x*2+(x-1);
        }
        else{
            ans = x*3;
        }
        cout<<ans<<endl;
    }

    return 0;
}
