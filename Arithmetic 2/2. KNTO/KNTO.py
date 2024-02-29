import sys, math
sys.stdin = open('KNTO.inp', 'r')
sys.stdout = open('KNTO.out', 'w')

n = int(input())
p = 0
r = 1
ilim = int(math.sqrt(n))+1

for i in range(2, ilim):
	if n % i:
		continue
	k = 0
	p += 1
	while n%i == 0:
		n /= i
		k += 1
	r *= (k+1)

if n > 1:
	p += 1
	r *= 2
print(r-p)