import sys, math
sys.stdin = open('uocso.inp', 'r')
sys.stdout = open('uocso.out', 'w')
t = int(input())

for j in range(t):
    a = input().split()
    n = int(a[0])
    m = int(a[1])
    
    mn = m*n
    c = 0

    lim = int(math.sqrt(mn))+1
    for i in range(1, lim):
        if mn%i == 0:
            c += 1
            if (mn/i != i):
                c += 1
    print(c)