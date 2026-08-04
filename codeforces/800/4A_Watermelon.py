from collections import Counter

n = int(input())

while n > 0:
    l0 = 0
    l1 = 0
    a = int(input())
    l = list(input())
    if len(l) > 1:
        l0 = l[0]
        l1 = l[-1]
        del l[0]
        del l[-1]
    elif len(l) == 1:
        print(len(l))
        continue
    else:
        print("0")
        continue
    count = Counter(l)
    most_frequency = count.most_common(1)[0][0]
    new = [letter for letter in l if letter != most_frequency]
    new.insert(0,l0)
    new.insert(-1,l1)
    print(len(set(new)))
    n -= 1