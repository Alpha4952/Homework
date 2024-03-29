import sys
sys.stdin = open('Sumx.inp', 'r')
sys.stdout = open('Sumx.out', 'w')

m, n, x = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()

def count_frequencies(lst):
    freq = []
    i = 0
    while i < len(lst):
        c = 1
        for j in range(i+1, len(lst)):
            if lst[i] == lst[j]:
                c += 1
            else:
                break
        freq.append(c)
        i += c
    return freq

fa = count_frequencies(a)
fb = count_frequencies(b)

def binary_search(target: int, array: list):
    array.sort()

    start = 0; end = len(array)

    while start < end:
        mid = (end-start)//2 + start
        
        if array[mid] == target:
            return mid
        elif array[mid] < target:
            start = mid+1
        else:
            end = mid
    return -1

r = 0; ia = 0; ifa = 0
while ia < len(a):
    mi = binary_search(x-a[ia], b)
    if mi > -1:
        r += fa[ifa]*fb[mi]
    ia += fa[ifa]
    ifa += 1

print(r)