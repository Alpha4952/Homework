inp = open('CARD.inp', 'r').readlines()[0].split()
m = int(inp[0]); k = int(inp[1]); s = inp[2][:-1]

a = []
for i in range(m): a.append(str(i))
for i in range(len(s)):
	if i == 'A':
		t = a[0]
		a.pop(0)
		a.append(t)
	else:
		t = a[1]
		a.pop(1)
		a.append(t)
open('CARD.out', 'w').write(f'{a[k-1]} {a[k]} {a[k+1]}') #.write(a[k-1] + ' ' + a[k] + ' ' + a[k+1]) #print(a[k-1], a[k], a[k+1])