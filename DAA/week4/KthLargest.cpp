//week4 Q3
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        return pq.top();
    }

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cin>>k;
        cout<<findKthLargest(arr, k)<<endl;
    }

    return 0;
}