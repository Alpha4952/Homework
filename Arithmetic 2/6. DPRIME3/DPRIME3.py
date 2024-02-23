import math
n = int(input())
iLimit = int(math.sqrt(n)) + 1
jLimit = n + 1

a = [0]*(n+1)
a[0] = 1
if n > 1:
	a[1] = 1
if n > 2:
	for i in range(2, iLimit):
		if a[i]:
			continue

		for j in range(i*i, jLimit, i):
			a[j] = 1

c = 1
for i in range(n):
	if a[i]:
		continue
	for j in range(i+1, n+1):
		if a[j]:
			continue
		
		z = i*i + j*j
		if z > n or a[z]:
			continue
		print(i, j, z)
		c = 0
if c:
	print(-1)