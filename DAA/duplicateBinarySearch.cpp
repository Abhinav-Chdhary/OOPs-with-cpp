//Week 2 Question 1
#include <iostream>

using namespace std;

int counter(int arr[], int n, int target, int m){
    int count = 0, i=m;
    //left counter
    while(i>=0 && arr[i]==target){
        count++; i--;
    }
    //right counter
    i = m+1;
    while(i<n && arr[i]==target){
        count++; i++;
    }
    return count;
}

void binarySearch(int arr[], int n, int target){
    int l=0, r=n-1, c=0;
    while(l<=r){
        int mid = l+(r-l)/2;
        c++;
        if(arr[mid]==target){
            
            cout<<target<<" - "<<counter(arr, n, target, mid)<<endl;
            return;
        }
        else if(target<arr[mid])
            r=mid;
        else if(target>arr[mid])
            l=mid+1;
    }
    cout<<"Key not present"<<c<<endl;
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
        binarySearch(arr, n, target);
    }

    return 0;
}