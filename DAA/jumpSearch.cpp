//Week 1 Question 3
#include <iostream>
#include <math.h>

using namespace std;

void jumpSearch(int arr[], int n, int target){
    //to be written
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