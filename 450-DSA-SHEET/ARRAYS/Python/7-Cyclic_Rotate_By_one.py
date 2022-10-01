def rotate(arr,n):
    x = arr[n-1]
    for i in reversed(range(n)):
        arr[i] = arr[i-1]
    arr[0] = x


def main():
    T = int(input())
    while(T>0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        rotate(arr, n)
        print(*arr)
        T-=1

if __name__ == "__main__":
    main()