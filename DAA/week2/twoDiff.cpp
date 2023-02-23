//week 2 question 3
#include <iostream>
#include <vector>
using namespace std;

void sequenceFinder(int arr[], int n, int key){
    int count = 0;
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            if(abs(x-arr[j])==key){
                count++;
            }
        }
    }
    cout<<count<<endl;
}

int main()
{    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        sequenceFinder(arr, n, key);

    }

    return 0;
}
