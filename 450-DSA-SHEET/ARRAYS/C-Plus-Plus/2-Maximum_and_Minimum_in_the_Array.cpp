#include <bits/stdc++.h>
using namespace std;

//------------------------------------------------------------------------------

// Approach 1 : BY COMPARING

/*

int main(){
    int n;
    cin>>n;
    cout << "Enter the number of elements: ";
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){   
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Maximum Element: " << max << endl;
    cout << "Minimum Element: " << min << endl;
}

*/
//------------------------------------------------------------------------------

// Approach 2 : BY SORTING

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){   
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Maximum Element: " << arr[n-1] << endl;
    cout << "Minimum Element: " << arr[0] << endl;
}