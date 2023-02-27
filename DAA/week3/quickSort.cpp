#include <iostream>
using namespace std;

int findPivot(int arr[], int l, int r){
    int pivot = arr[r];
    int strt = l;
    for(int i=strt; i<r; i++){
        if(arr[i]<pivot){
            swap(arr[i], arr[strt]);
            strt++;
        }
    }
    swap(arr[strt], arr[r]);
    return strt;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int pivot = findPivot(arr, l, r);
        quickSort(arr, l, pivot-1);
        quickSort(arr, pivot+1, r);
    }
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void checkDupli(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        quickSort(arr, 0, n-1);
        display(arr, n);
        checkDupli(arr, n);
    }

    return 0;
}