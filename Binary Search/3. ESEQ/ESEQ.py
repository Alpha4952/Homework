import sys
sys.stdin = open('ESEQ.inp', 'r')
sys.stdout = open('ESEQ.out', 'w')

n = int(input())
a = list(map(int, input().split()))

psum = 0
ssum = sum(a)
prefix_sums = {}

res = 0

for i in range(n):
    psum += a[i]

    try:
        res += prefix_sums[ssum]
    except:
        res = res

    try:
        prefix_sums[psum] += 1
    except:
        prefix_sums[psum] = 1
    ssum -= a[i]

print(res % pow(2, 32))