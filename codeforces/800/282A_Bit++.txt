n = int(input())
l = list()
x = 0

for i in range(n):
    l.append(input())

for i in l:
    if i in ["++X" , "X++"] :
        x = x+ 1
    elif i in ["--X" , "X--"]:
        x = x - 1
print(x)