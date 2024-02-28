import sys, math
sys.stdin = open('uocnto.inp', 'r')
sys.stdout = open('uocnto.out', 'w')

def prime ():
	for i in range(2, 33):
		if pri[i]:
			continue
		for j in range(i*i, 1001, i):
			pri[j] = 1

def inp ():
	global t, la, ra
	for i in range(t):
		a = input().split()
		l = int(a[0])
		r = int(a[1])
		la.append(l)
		ra.append(r)

def dct (n: int):
	r = 0
	lim = int(math.sqrt(n)) + 1
	for i in range (1, lim):
		if n%i == 0:
			r += 1
			if n/i != i:
				r += 1
	return r

t = int(input())
la = []; ra = []
pri = [0]*1001
pri[0] = 1; pri[1] = 1

inp()
prime()

minl = min(la)
maxr = max(ra)
arr = [0]*(maxr+1)

for i in range(minl, maxr+1):
	arr[i] = arr[i-1]
	if pri[dct(i)] == 0:
		arr[i] += 1

for i in range(t):
	#r = arr[ra[i]] - arr[la[i]]
	#print(r)
	if ra[i] == la[i] and arr[ra[i]] > arr[ra[i]-1]:
		print(1)
	elif arr[ra[i]] > arr[ra[i]-1]:
		print(arr[ra[i]] - arr[la[i]] + 1)
	else:
		print(arr[ra[i]] - arr[la[i]])
#good, now make it c++
#k, let's wait about 5 hours