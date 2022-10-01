#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int getMinDiff(int arr[], int n, int k){
            sort(arr,arr+n);
            int maxE, minE;
            int ans = arr[n-1] - arr[0];
            for(int i=1;i<n;i++){
                if(k <= arr[i]){
                    maxE = max(arr[i-1]+k, arr[n-1]-k);
                    minE = min(arr[0]+k, arr[i]-k);
                    ans = min(ans, (maxE-minE));
                }
            }
            return ans;
        }
};


int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr,n,k);
        cout << ans << endl;
    }
    return 0;
}