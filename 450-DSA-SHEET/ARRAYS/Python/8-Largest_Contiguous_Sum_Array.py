import math
from numpy import inf


class Solution:
    def maxsubarraysum(self,arr,N):
        curMax, maxTillNow = 0, -inf
        for i in arr:
            curMax = max(i, curMax+i)
            maxTillNow = max(maxTillNow, curMax)
        return maxTillNow

def main():
    T = int(input())
    while(T>0):
        n = int(input())
        arr = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.maxsubarraysum(arr,n))
        T-=1
    
if __name__ == "__main__":
    main()