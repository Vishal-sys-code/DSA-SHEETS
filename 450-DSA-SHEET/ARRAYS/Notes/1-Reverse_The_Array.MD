# **REVERSE THE ARRAY**

There are many ways to reverse an array.

1. Writing an reverse for loop 
2. By two pointers
3. By stack
4. STL


* **```Writing an reverse for loop```**

```cpp
for(int i=n-1;i>=0;i--){
    cout << arr[i];
}
cout << endl;
```


* **```By two pointers```**

```cpp
void revereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}  
```

* **```By STL```**

```cpp
// Using built-in function
reverse(arr,arr+n);
```

* **```By Stack```**

```cpp
void reverseArray(int arr[], int n)
{
  
    // Initialize a stack of capacity n
    Stack* stack = createStack(n);
  
    for (int i = 0; i < n; i++) {
  
        // Insert arr[i] into the stack
        push(stack, arr[i]);
    }
  
    // Reverse the array elements
    for (int i = 0; i < n; i++) {
  
        // Update arr[i]
        arr[i] = pop(stack);
    }
  
    // Print array elements
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
```