import sys
sys.stdin = open('MOVE.inp', 'r')
sys.stdout = open('MOVE.out', 'w')

n = int(input())
middle = (n+1)/2

r = 0
t = int(input())
for i in range(t):
	inp = input().split()
	x = int(inp[0])
	y = int(inp[1])

	dx = abs(middle - x)
	dy = abs(middle - y)
	r += 15*min(dx, dy) + 10*(max(dx, dy) - min(dx, dy))*(dx != dy)
print(int(r))