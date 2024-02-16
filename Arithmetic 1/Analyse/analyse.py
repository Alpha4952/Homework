import math, sys
sys.stdin = open('analyse.inp', 'r')
sys.stdout = open('analyse.out', 'w')

n = int(input())

r = 1; f = []; c = -1; fs = ''
for i in range(1, n+1): r *= i
t = math.sqrt(r)
for i in range (2, int(t)):
    f.append(0)
    c += 1
    if (r%i == 0):
        while (r%i == 0):
            r /= i
            f[c] += 1

for i in f:
    if i != 0: fs += str(i) + " "

print(fs)