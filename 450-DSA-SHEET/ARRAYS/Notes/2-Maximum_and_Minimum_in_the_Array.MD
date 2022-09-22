# **Maximum and Minimum in the Array**

There are two approaches to do the problem

    1.  By comparing
    2.  By sorting

* **```By Comparing```**

```cpp
set max = arr[0];
set min = arr[0];

for(i=0 to N){
    if(arr[i] > max){
        max = arr[i];
    }
    if(arr[i] < min){
        min = arr[i];
    }
}

print(max)
print(min)
```

* **```By Sorting```**

```cpp
sort(arr,arr+n)
print("maximum", arr[n-1])
print("minimum", arr[0])
```