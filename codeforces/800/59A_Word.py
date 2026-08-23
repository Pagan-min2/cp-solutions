word = input()

capital = 0
small = 0

for char in word : 
    if (char in "ABCDEFGHIJKLMNOPQRSTQRSTUVWXYZ"):
        capital += 1
    elif (char in "abcdefghijklmnopqrstuvwxyz"):
        small += 1

if(capital > small ):
    print(word.upper())
else :
    print(word.lower())