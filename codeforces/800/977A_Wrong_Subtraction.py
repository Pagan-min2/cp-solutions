number,n = map(int,input().split())
while n > 0:
    if number % 10 == 0 :
        number = int(number/10)
    else :
        number = number - 1
    n -= 1

print(number)