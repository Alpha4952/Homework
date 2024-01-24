inp = open('CHESS.inp', 'r').readlines()
n = int(inp[0].split()[0])

a = []; b = []
for i in range(n):
	line = inp[i+1].split()
	a.append(int(line[0]))
	b.append(int(line[1]))

a.sort()
b.sort()
print(a)
print(b)
aa = 0; bb = 0; r = 0
while aa < n and bb < n:
	if b[bb] <= a[aa]:
		bb += 1
	else:
		r += 2
		b.pop(bb)
		a.pop(aa)
		
		n -= 1

aa = 0; bb = 0
while aa < n and bb < n:
	if b[bb] < a[aa]:
		bb += 1
	else:
		b.pop(bb)
		a.pop(aa)
		r += 1
		n -= 1

open('CHESS.out', 'w').write(str(r)) #print(r)