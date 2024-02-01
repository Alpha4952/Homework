import sys
#sys.stdin = open('DIFFSSTR.inp', 'r')
#sys.stdout = open('DIFFSSTR.out', 'w')
n = int(input())
s = input()

cur = 0
l = min(1, len(s))
while l <= n and l:
	ck = []
	f = 0
	for cur in range(n-l+1):
		st = s[cur:cur+l]
		if st in ck:
			f = 1
			break
		else:
			ck.append(st)
	if f:
		l += 1
	else:
		break
	
if l:
	print(str(l))