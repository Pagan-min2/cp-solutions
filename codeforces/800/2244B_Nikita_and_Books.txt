n = int(input())

while n > 0:
    a = int(input())
    l = list(map(int,input().split()))
    boolean = True
    sum = 0
    for i in range(a):
            sum += l[i]
            if sum >= (i+1)*(i+2)/2:
                pass
            else :
                boolean = False
                break
    if boolean:
        print("YES")
    else:
        print("NO")
    n -=1