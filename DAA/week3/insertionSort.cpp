#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int comps = 0, shifts = 0;
    for(int i=1; i<n; i++){
        int hole = i;
        int value = arr[i]; shifts++;
        while (hole>0 && value<arr[hole-1])
        {
            comps++; shifts++;
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = value;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"comparisions: "<<comps<<endl;
    cout<<"shifts: "<<shifts<<endl;
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
        insertionSort(arr, n);
    }

    return 0;
}