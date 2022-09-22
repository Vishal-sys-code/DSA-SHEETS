def maxandmin(arr):
    n = len(arr)
    max = arr[0]
    min = arr[0]
    for i in range (1, n):
        if arr[i] > max:
            max = arr[i]
        if arr[i] < min:
            min = arr[i]
    print("Maximum Element in an array is: ", max)
    print("Minimum Element in an array is: ", min)

if __name__ == '__main__':
    arr = [10,20,30,40,50,60]
    maxandmin(arr)