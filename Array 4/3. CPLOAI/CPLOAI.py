n = int(input())
a = input().split()

b = [0]*1001
for i in a:
	b[int(i)] = 1

c = 0; d = []
for i in range(1001):
	if b[i]:
		c += 1
		d.append(i)
print(c)
for i in d:
	print(i, end=' ')