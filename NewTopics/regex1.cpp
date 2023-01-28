#include <bits/stdc++.h>
using namespace std;
//if a string is composed of 'a' and 'b' only find if it ends with
//the character it began with
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    string regexPattern = "^[a-b]$|^([a-b]).*\\1$";
    regex regexRule(regexPattern);
    while(t--){
        string s;
        getline(cin>>ws, s);
        bool ans = regex_match(s, regexRule);
        cout<<ans<<endl;
    }

    return 0;
}
