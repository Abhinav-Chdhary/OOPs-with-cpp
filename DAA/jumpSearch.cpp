//Week 1 Question 3
#include <iostream>
#include <math.h>

using namespace std;

void jumpSearch(int arr[], int n, int target){
    int left=0, right=0, i=0, count=0;
    while(right<n){
        left = right;
        right = pow(2, i++);
    }
    right = min(right, n-1);
    for(int i=left; i<=right; i++){
        count++;
        if(arr[i]==target){
            cout<<"Present "<<count<<"\n";
            return;
        }
    }
    cout<<"Not Present "<<count<<"\n";
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
        jumpSearch(arr, n, target);
    }

    return 0;
}