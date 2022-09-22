#include <bits/stdc++.h>
using namespace std;

// ------------------------------------------------------------------------------

// Approach 1: Writing an reverse for loop
/*
int main(){
    int n; 
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Reversed Array is: " << endl;
    for(int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

// ------------------------------------------------------------------------------

// Approach 2 : Using two pointers

/*

void reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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
    int start,end;
    cout << "Reversed Array: "  << endl;
    reverseArray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

*/

// ------------------------------------------------------------------------------

// Approach 3: By using built-in function

int main(){
    int n; 
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Reversed Array: "  << endl;
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// ------------------------------------------------------------------------------