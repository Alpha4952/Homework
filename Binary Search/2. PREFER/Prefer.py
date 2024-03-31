import sys, bisect
sys.stdin = open('Prefer.inp', 'r')
sys.stdout = open('Prefer.out', 'w')

n = int(input())
audience = list(map(int, input().split()))
audience.sort()

p = int(input())
for i in range(p):
    lb, rb = map(int, input().split())
    
    print(bisect.bisect_right(audience, rb) - bisect.bisect_left(audience, lb))