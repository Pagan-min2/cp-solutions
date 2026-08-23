n = int(input())
l = [0,0,0]

while n > 0:
    input_list = list(map(int,input().split()))
    l[0] = l[0] + input_list[0]
    l[1] = l[1] + input_list[1]
    l[2] = l[2] + input_list[2]
    n = n-1
if l == [0,0,0] :
    print("YES")
else :
    print("NO")