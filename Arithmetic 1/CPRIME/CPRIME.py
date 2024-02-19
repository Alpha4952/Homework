import sys, math
sys.stdin = open('CPRIME.inp', 'r')
sys.stdout = open('CPRIME.out', 'w')

n = int(input())

def pri(n: int):
	f = int(math.sqrt(n)) + 1
	if n <= 1:
		return False
	if n <= 3:
		return True
	if n % 2 == 0:
		return False
	for i in range(3, f, 2):
		if n % i == 0:
			return False
	return True

if str(n)[0] == 0:
	print(0)
elif pri(n) == False:
	print(0)
else:
	if pri(int(str(n)[::-1])):
		print(1)
	else:
		print(0)