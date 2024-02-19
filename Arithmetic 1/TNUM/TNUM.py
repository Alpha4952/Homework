import sys, math
sys.stdin = open('TNUM.inp', 'r')
sys.stdout = open('TNUM.out', 'w')

n = int(input())
a = input().split()

def pri (n: int):
	if n < 2:
		return False
	if n < 4:
		return True
	if n % 2 == 0:
		return False
	f = int(math.sqrt(n)) + 1
	for i in range (3, f, 2):
		if n % i == 0:
			return False
	return True

for i in range(n):
	t = int(a[i])
	temp = math.sqrt(t)
	if temp != round(temp):
		print('NO')
	elif pri(int(temp)):
		print('YES')
	else:
		print('NO')