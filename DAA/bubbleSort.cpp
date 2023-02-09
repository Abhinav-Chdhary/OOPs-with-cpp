#include <iostream>

using namespace std;

void nbubblesort(int arr[], int n){
    //non-decreasing order
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        
    }
}
void bubblesort(int arr[], int n){
    //non-increasing order
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n-i-1; j++)
        {
            if(arr[j]<arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        
    }
}
void display(int arr[], int n){
    for (size_t i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10];
    cout << "Enter 10 numbers\n";
    for (size_t i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    nbubblesort(arr, 10);
    display(arr, 10);
    
    return 0;
}