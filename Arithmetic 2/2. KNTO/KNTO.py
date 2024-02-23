import sys, math
sys.stdin = open('KNTO.inp', 'r')
sys.stdout = open('KNTO.out', 'w')

n = int(input())
lim = int(math.sqrt(n)) + 1

a = [0]*(n+1)
a[0] = 1; a[1] = 1
for i in range(2, lim):
	if a[i]:
		continue

	for j in range(i*i, n+1, i):
		a[j] = 1

c = 0
for i in range(1, n+1):
	if a[i]:
		if n%i == 0:
			c += 1
			print(i, end=' ')
print(c)