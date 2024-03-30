import sys, bisect
sys.stdin = open('Sumx.inp', 'r')
sys.stdout = open('Sumx.out', 'w')

m, n, x = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()

r = 0

for i in range(m):
    tar = x-a[i]
    
    r += bisect.bisect_right(b, tar) - bisect.bisect_left(b, tar);

print(r)