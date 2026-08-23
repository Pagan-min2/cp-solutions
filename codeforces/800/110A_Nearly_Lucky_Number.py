n = int(input())
boolean = True
counter = 0


while n > 0 :
    if n%10 == 7 or n %10 == 4:
        counter += 1
    n = n//10


if counter == 0:
    boolean = False


while counter > 0 :
    if counter%10 == 7 or counter %10 == 4:
        pass
    else:
        boolean = False
        break
    counter = counter//10


if boolean:
    print("YES")
else:
    print("NO")