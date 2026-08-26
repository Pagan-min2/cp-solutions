n = int(input())

while n > 0:
    i = int(input())
    if i == 2:
        print("YES")
    elif i == 3:
        print("NO")
    else:
        boolean = True
        for j in range(2,(i+1)//2 + 1):
            if((i+1) % j == 0):
                boolean = False
                break
        if boolean:
            print("YES")
        else:
            print("NO")
    n -= 1