n = int(input())
while n > 0:
    a,b = map(int,input().split())
    if(a%b == 0):
        print("YES")
    else:
        print("NO")
    n -= 1