m = int(input())
k = int(input())

n = m

for i in range(k):
    m += n*10
    n *= 10

print(m)