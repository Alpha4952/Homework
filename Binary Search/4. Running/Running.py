import sys, bisect
sys.stdin = open('Running.inp', 'r')
sys.stdout = open('Running.out', 'w')

a = []

n = int(input())
for i in range(n):
    a.append(int(input()))

a.sort()

r = 0
for x in range(n-2):
    for y in range(x+1, n-1):
        left = 2*a[y] - a[x]
        right = 3*a[y] - 2*a[x]
        
        r += bisect.bisect_right(a, right, y+1) - bisect.bisect_left(a, left, y+1)
print(r)