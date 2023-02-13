//program to learn the use of string stream class
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

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
    //can we store the words in a vector? let's try
    cout<<"Input: ";
    getline(cin>>ws, s);

    stringstream iss(s);
    vector<string> vec;

    while (iss>>word)
    {
        vec.emplace_back(word);
    }
    //display
    for(auto it: vec){
        cout<<it<<" ";
    }
    
    return 0;
}
