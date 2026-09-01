n = int(input())
while n >0:
    a = int(input())
    l = list(map(int,input().split()))
    maximum = max(l)
    minimum = min(l)
    print(maximum-minimum+1)
    n -= 1