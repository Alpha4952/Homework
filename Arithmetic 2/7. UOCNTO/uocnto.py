import sys, math
sys.stdin = open('uocnto.inp', 'r')
sys.stdout = open('uocnto.out', 'w')

def dct (n: int):
	r = 1
	n = int(math.sqrt(n))
	lim = int(math.sqrt(n)) + 1

	for i in range (2, lim):
		k = 0

		while n%i == 0:
			k += 1
			n /= i
		r *= (2*k + 1)

	if n > 1:
		r *= 3
	return r

pri = [0]*1000001
pri[0] = 1;	pri[1] = 1
for i in range(2, 1001):
	if pri[i]:
		continue
	for j in range(i*i, 1000001, i):
		pri[j] = 1

c = [0]*1000001

for i in range(2, 1000001):
	if pri[i] == 0:
		c[i] = 1
	else:
		k = int(math.sqrt(i))
		if k*k == i:
			if pri[dct(i)] == 0:
				c[i] = 1
for i in range(2, 1000001):
	c[i] = c[i-1] + c[i]

t = int(input())

for i in range(t):
	inp = input().split()
	l = int(inp[0])
	r = int(inp[1])
	print(c[r] - c[l-1])