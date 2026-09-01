distance = int(input())
counter = 0
while distance > 0:
    if distance >= 5:
        distance -= 5
    elif distance >= 4:
        distance -= 4
    elif distance >= 3:
        distance -= 3
    elif distance >= 2:
        distance -= 2
    else:
        distance -= 1

    counter += 1

print(counter)