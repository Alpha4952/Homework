inp = open('BUY.inp', 'r').readlines()
m = int(inp[0].split()[0])
n = int(inp[0].split()[1])

a = [[], [], []]; b = [0]*n
for i in range(1, n+1):
	line = inp[i].split()
	a[0].append(i)
	a[1].append(int(line[0]))
	a[2].append(int(line[1]))

s = True
while s:
	s = False
	for i in range(1, n):
		if a[2][i] < a[2][i-1]:
			t = a[2][i]
			a[2][i] = a[2][i-1]
			a[2][i-1] = t
			t = a[0][i]
			a[0][i] = a[0][i-1]
			a[0][i-1] = t
			s = True

s = 0; r = 0; ii = 0
for i in range(n):
	ii = i
	if s + a[1][i] > m: break
	s += a[1][i]
	r += a[1][i]*a[2][i]
	b[a[0][i]] = a[1][i]

r += (m-s) * a[2][ii]
print(ii)
b[a[0][ii]-1] = m-s
print(r)
for i in b:
	print(i)
print(a)