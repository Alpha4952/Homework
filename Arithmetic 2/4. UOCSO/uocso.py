import sys, math
sys.stdin = open('uocso.inp', 'r')
sys.stdout = open('uocso.out', 'w')

def lmao (a: int):
    i = 2
    while i*i <= a:
        while a%i == 0:
            a /= i
            arr[i] += 1
        i += 1
    return a

t = int(input())
for _ in range(t):
    inp = input().split()
    a = int(inp[0])
    b = int(inp[1])

    arr = [0]*(max(a, b)+1)
    r = 1

    x = int(lmao(a))
    y = int(lmao(b))

    for i in range (1, max(a, b)):
        if arr[i] > 0:
            r *= (arr[i] + 1)
    print(r, x, y)

    if x > 1 and y > 1:
        if x == y:
            r *= 3
        else:
            r *= 4
    elif x > 1 or y > 1:
        r *= 2

    print(r, x, y, arr)