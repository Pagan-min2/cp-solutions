x, y = map(int, input().split())
i = 0
while x <= y:
    i += 1
    x = x*3
    y = y*2

print(i)