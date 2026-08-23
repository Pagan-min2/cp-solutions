n = int(input())
boolean = True
while boolean :
    if(str(n+1).count('0') > 1 or str(n+1).count('1') > 1 or str(n+1).count('2') > 1 or str(n+1).count('3') > 1 or str(n+1).count('4') > 1 or str(n+1).count('5') > 1 or str(n+1).count('6') > 1 or str(n+1).count('7') > 1 or str(n+1).count('8') > 1 or str(n+1).count('9') > 1):
        pass
    else :
        boolean = False 
    n += 1
print(n)