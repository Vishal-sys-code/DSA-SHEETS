#include <bits/stdc++.h>
using namespace std;


void sort012(int arr[], int n){
    int low = 0, mid = 0;
    int high = n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0: 
                swap(arr[low++], arr[mid++]);
                break;

            case 1:
                mid++;
                break;
            
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

int main(){
    int n; 
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
    cout << "DUTCH NATIONAL FLAG PROBLEM: " << endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    // 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1
    return 0;
}