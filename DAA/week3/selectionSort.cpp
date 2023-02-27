#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    int comps = 0, swaps = 0;
    for(int i=0; i<n-1; i++){
        int pos = i; int myMin = arr[i];
        for(int j=i+1; j<n; j++){
            comps++;
            if(myMin>arr[j]){
                pos = j;
                myMin = arr[j];
            }
        }
        swap(arr[i], arr[pos]); swaps++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"comparisions : "<<comps<<endl;
    cout<<"swaps : "<<swaps<<endl;
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
        selectionSort(arr, n);
    }

    return 0;
}