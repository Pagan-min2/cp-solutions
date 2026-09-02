n = int(input())
while n > 0:
    a = int(input())
    digit = 0
    ans = 1
    while (a > 0):
        ans *=10 
        digit += 1
        a =a//10
    print(ans+1)
    n -= 1