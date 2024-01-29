n = input().split()
k = int(n[1]); n = int(n[0])
a = input().split()
b = [int(a[0])]*n

for i in range(1, n):
	b[i] = b[i-1]+int(a[i])

c = [0]*n
for i in range(n):
	c[i] = b[i] - k

print(b)
print(c)

ib = 0; ic = 0; t = True; ml = n
while ic < n:
	if c[ic] > 0:
		while b[ib] < c[ic] and ib < ic: ib += 1
		print(a[ib])
		ml = min(ic-ib+1*(c[ic] != b[ib]), ml)
	ic += 1
print(ml)