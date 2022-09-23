#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void move(int arr[], int n){
    // USING DUTCH NATIONAL FLAG CONCEPT
    int low = 0;
    int high = n-1;
    while(low < high){
        if(arr[low] < 0){
            low++;
        }
        else if(arr[high] > 0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }
}


//-------------------------------------------------------------

// APPROACH 1

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
    sort(arr,arr+n);
    cout << "Moving all the elements to one side: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

//-------------------------------------------------------------

// APPROACH 2: BY USING DNF SORT CONCEPT MODIFICATION OF IT

int main(){
    int n; 
    cout << "Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    move(arr,n);
    cout << "Moving all the elements to one side: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}