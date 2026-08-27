n = int(input())

while n > 0:
    l = input()
    alice = ""
    bob = ""
    for i in range(len(l)):
        if l[i] == '0':
            alice = l[:i] + l[i+1:]
            break
    for i in range(len(alice)):
        if alice[i] == '1':
            bob = alice[:i] + alice[i+1:]
            break
    print(bob)
    n -=1