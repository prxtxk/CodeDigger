n, x = map(int, input().split())
a = list(map(int, input().split()))

a_sort = sorted(a)

f = True

for i in range(n-x, x):
    if (i >= 0 and i < n and a_sort[i] != a[i]):
        f=False
        break
if f:
    print("YES")
else:
    print("NO")


