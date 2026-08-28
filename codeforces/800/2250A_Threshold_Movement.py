n = int(input())

while n > 0:
  a = int(input())
  l = list(map(int, input().split()))

  if a < 2 or a % 2 != 0:
    print("NO")
    n -= 1
    continue

  max_even = max(l[1::2])
  min_odd = min(l[0::2])

  if max_even < min_odd:
    print("YES")
  else:
    print("NO")

  n -= 1