//program to learn the use of string stream class
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

    string s;
    getline(cin>>ws, s);

    stringstream sen(s);

    string word;

    sen>>word;
    cout<<word;
    sen>>word;
    cout<<" "<<word<<"\n";
    while(sen>>word){
        cout<<word<<" ";
    }
    cout<<endl;

    return 0;
}
