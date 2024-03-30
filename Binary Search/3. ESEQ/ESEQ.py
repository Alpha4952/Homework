import sys, bisect
sys.stdin = open('ESEQ.inp', 'r')
sys.stdout = open('ESEQ.out', 'w')

n = int(input())
a = [0] + list(map(int, input().split()))

for i in range(1, n+1):
    a[i] += a[i-1]

res = 0
for i in range(1, n+1):
    r = bisect.bisect_right(a, a[n] - a[i], i+1)
    l = bisect.bisect_left(a, a[n] - a[i], i+1)
    res += l - r + 1

print(res)