n = int(input())

while n > 0:
    l = list(map(int,input().split()))
    if l[0] > l[1] + l[2]:
        l[0] = l[1] + l[2]
    elif l[1] > l[2] + l[0]:
        l[1] = l[2] + l[0]
    elif l[2] > l[1] + l[0]:
        l[2] = l[1] + l[0]
    range = max(l) - min(l)
    print(range)
    n -= 1