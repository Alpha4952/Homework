import math#, sys

#sys.stdin = open('DPRIME3.inp', 'r')
#sys.stdout = open('DPRIME3.out', 'w')

n = int(input())
iLimit = int(math.sqrt(100000)) + 1
jLimit = 100001

a = [0]*(100001)
a[0] = 1
if n > 1:
	a[1] = 1
if n > 2:
	for i in range(2, iLimit):
		if a[i]:
			continue

		for j in range(i*i, jLimit, i):
			a[j] = 1

def p (n: int):
	if n < 2:
		return False
	if n < 4:
		return True
	if n%2 == 0:
		return False
	lim = int(math.sqrt(n)) + 1
	for i in range(3, lim, 2):
		if n % i == 0:
			return False
	return True

x = 2
limy = int(math.sqrt(n - 4))+1
c = 0
for y in range(3, limy):
	if a[y]:
		continue

	z = y*y + 4
	if p(z):
		c += 1
		print(x, y, z)
if c == 0:
	print(-1)