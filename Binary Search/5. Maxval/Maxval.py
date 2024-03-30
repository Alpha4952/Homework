import sys, bisect
sys.stdin = open('Maxval.inp', 'r')
sys.stdout = open('Maxval.out', 'w')

n = int(input())
a = list(map(int, input().split()))
a.sort()

print(n, a)