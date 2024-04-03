import sys, bisect
sys.stdin = open('Hengap.inp', 'r')
sys.stdout = open('Hengap.out', 'w')

n, r = map(int, input().split())
a = list(map(int, input().split()))
a.sort()

res = 0
for i in range(n):
    res += n - bisect.bisect_left(a, a[i] + r + 1, i+1)
print(res)