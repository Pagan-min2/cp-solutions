n = int(input())
people = 0
maximum = 0 
while n > 0:
    d,a = map(int, input().split())
    people = people + a - d
    if maximum < people:
        maximum = people
    n -= 1
print(maximum)