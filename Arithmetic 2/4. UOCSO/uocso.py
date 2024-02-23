import sys, math
sys.stdin = open('uocso.inp', 'r')
sys.stdout = open('uocso.out', 'w')
t = int(input())

for j in range(t):
    a = input().split()
    n = int(a[0])
    m = int(a[1])
    
    mn = m*n
    c = 1

    lim = int(math.sqrt(mn))+1
    for i in range(2, lim):
        if mn%i == 0:
            c++
            if (mn/i != i) c++
