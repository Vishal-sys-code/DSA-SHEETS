# **MOVING ALL THE NEGATIVE TO ONE SIDE**

There are two approaches to do this.<br>

* By Sorting method [Time Complexity : ```O(nlogn)```]
* By Modificated DNF Algorithm [Time Complexity : ```O(n)```]

<hr>

* <b>```By Sorting method [Time Complexity : ```O(nlogn)```]```</b>

```cpp
Step1: Sort the array
Step2: Print the array

//Result: Now array is in sorted so all the negative numbers will be on the one side
```

<hr>

* <b>```By Modificated DNF Algorithm [Time Complexity : ```O(n)```]```</b>


```
Approach:

The first color will be for all negative integers and the second color will be for all positive integers. We will divide the array into three partitions with the help of two pointers, low and high. 

1. ar[1…low-1] negative integers
2. ar[low…high] unknown
3. ar[high+1…N] positive integers
```

```cpp
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
```

<hr>