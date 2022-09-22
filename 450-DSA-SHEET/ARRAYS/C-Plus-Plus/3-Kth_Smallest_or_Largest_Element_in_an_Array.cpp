#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout << "Enter the Kth value to find the Smallest/Largest Value in an array: " << endl;
    cin>>k;
    // sorting the array in the increasing order
    sort(arr,arr+n);
    cout << "The sorted array in the increasing order is: " << endl;
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans = arr[k-1];
    cout << "The kth Smallest/Largest Element in the array is: " << ans << endl;
    return 0;
}