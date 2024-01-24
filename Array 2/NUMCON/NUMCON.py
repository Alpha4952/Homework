a = []
inp = open('NUMCON.inp', 'r').readlines()
for i in inp:
	for j in i.split():
		a.append(j)

lena = len(a)
a.sort(reverse=True)
s = True
while s:
	s = False
	for i in range (lena-1):
		if a[i] + a[i+1] < a[i+1] + a[i]:
			s = True
			a[i], a[i+1] = a[i+1], a[i]

r = ''
for i in a:
	r += i
open('NUMCON.out', 'w').write(r)