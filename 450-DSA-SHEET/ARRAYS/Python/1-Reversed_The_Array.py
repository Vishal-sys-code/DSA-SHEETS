def reverseArray(arr,start,end):
    while start<end:
        arr[start], arr[end] = arr[end], arr[start]
        start+=1
        end-=1

arr = [5,4,3,2,1]
print("Array Before Reversing: ")
print(arr)

reverseArray(arr, 0, 4)

print("Array After Reversing: ")
print(arr)