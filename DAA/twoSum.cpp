#include <iostream>
#include <vector>
using namespace std;

void sequenceFinder(int arr[], int n){
    vector<int> res;
    for(int i=0; i<n; i++){
        int x = arr[i];
        for(int j=i+1; j<n; j++){
            //to be done
        }
    }
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
        sequenceFinder(arr, n);

    }

    return 0;
}
