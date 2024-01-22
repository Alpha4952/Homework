inpf = open('FLOWERS.inp', 'r')
inp = inpf.readlines()
inpf.close()

n = int(inp[0])
a = inp[1].split()

b = [1]*n

for i in range(1, n):
	if a[i] == a[i-1] and a[i] == a[i-2]:
		b[i] = 2
	else:
		b[i] = b[i-1]+1
	

#print(maxl)
b = str(max(b))
print(b)
open('FLOWERS.out', 'w').writelines(b)