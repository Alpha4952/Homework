inp = open('SEQGAME.inp', 'r').readlines()
n = int(inp[0].split()[0])
b = [int (_) for _ in inp[1].split()]
c = [int(_) for _ in inp[2].split()]
b.sort()
c.sort()

dif = 99999

print(n)

l = 0; r = n-1
while l < n and r >= 0:
	x = b[l]; y = c[r]
	if x + y == 0:
		dif = 0
		break

	if x + y < 0: l += 1
	if x + y > 0: r -= 1
	dif = min(dif, abs(x + y))

open('SEQGAME.out', 'w').write(str(dif))
print(dif)