#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       int i=0;
    int arr[m+n];
    for(i=0;i<n;i++){
        arr[i] = a[i];
    }
    for(int j=0;j<m;i++,j++){
        arr[i] = b[j];
    }
    sort(arr,arr+m+n);
    int count = 0;
    for(int i=0;i<m+n;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    return count;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
} 