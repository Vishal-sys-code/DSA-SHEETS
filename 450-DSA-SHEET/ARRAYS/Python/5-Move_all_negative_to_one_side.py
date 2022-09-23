
# APPROACH 1

"""
def move(arr):
    arr.sort()

arr = [-1, 2, -3, 4, 5, 6, -7, 8, 9]
move(arr)
for i in arr:
    print(i, end = ' ')

"""

# ----------------------------------------------------

# APPROACH 2

def move(arr, n):
    low = 0
    high = n-1
    while(low<high):
        if (arr[low]<0):
            low+=1
        elif (arr[high]>0):
            high-=1
        else:
            arr[low],arr[high] = arr[high],arr[low]


def printArray(arr, n):
    for i in range(n):
        print(arr[i], end = ' ')

arr = [1, 2,  -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1]
n = len(arr)
move(arr, n)
printArray(arr, n)