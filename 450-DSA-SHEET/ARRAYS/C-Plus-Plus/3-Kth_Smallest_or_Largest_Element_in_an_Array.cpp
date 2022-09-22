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
    
    return 0;
}