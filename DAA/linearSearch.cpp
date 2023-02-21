//Week 1 Question 1
#include <iostream>

using namespace std;

void linearSearch(int arr[], int n, int target){
    int i;
    for(i=0; i<n; i++){
        if(arr[i]==target){
            cout<<"Present "<<i+1<<endl;
            return;
        }
    }
    cout<<"Not Present "<<i+1<<endl;
}

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n], target;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cin>>target;
        linearSearch(arr, n, target);
    }

    return 0;
}