n = int(input())
string = input()
anton = 0
danik = 0
for char in string:
    if char == 'A':
        anton += 1
    elif char == 'D':
        danik += 1


if(anton == danik):
    print("Friendship")
elif(anton > danik):
    print("Anton")
else:
    print("Danik")