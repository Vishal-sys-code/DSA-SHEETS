#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long maxsubarraysum(int arr[], int n){
        int curMax = arr[0], MaxTillNow = arr[0];
        for(int i=1;i<n;i++){
            curMax = max(arr[i], curMax+arr[i]);
            MaxTillNow = max(MaxTillNow, curMax);
        }
        return MaxTillNow;
    }
};

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout << ob.maxsubarraysum(arr,n) << endl;
    }
    return 0; 
}