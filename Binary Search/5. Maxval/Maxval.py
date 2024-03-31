import sys, bisect, random

sys.stdin = open("Maxval.inp", "r")
sys.stdout = open("Maxval.out", "w")

n = int(input())
a = list(map(int, input().split())) + [0]
a[:-1].sort()

print(1000000)
for i in range(2*pow(10, 6) + 1):
    print(random.randint(1, 1000000), end = ' ')

"""
r = 0
for i in range(n):
    lim = bisect.bisect(a, 2*a[i])
    lim = min(n+1, lim+1)
    
    for j in range(i+1, lim+1):
        if j >= n:
            break
        r = max(r, a[j] % a[i])
print(r)"""