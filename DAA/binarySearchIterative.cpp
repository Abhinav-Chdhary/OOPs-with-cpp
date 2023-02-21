//Week 1 Question 2
#include <iostream>

using namespace std;

void binarySearch(int arr[], int n, int target){
    int l=0, r=n-1, c=0;
    while(l<=r){
        int mid = l+(r-l)/2;
        c++;
        if(arr[mid]==target){
            cout<<"Found at "<<mid+1<<" total comparisions= "<<c<<endl;
            return;
        }
        else if(target<arr[mid])
            r=mid;
        else if(target>arr[mid])
            l=mid+1;
    }
    cout<<"Not found total comparisions= "<<c<<endl;
}

int main()
{   
    int n;
    cin>>n;
    int arr[n], target;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>target;
    binarySearch(arr, n, target);

    return 0;
}