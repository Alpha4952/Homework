import sys, bisect
sys.stdin = open('Prefer.inp', 'r')
sys.stdout = open('Prefer.out', 'w')

n = int(input())
audience = list(map(int, input().split()))
audience.sort()

def bisearch(target: int, array: list):
    l = 0; r = len(array)
    
    while l < r:
        mid = (r-l)//2 + l
        
        if array[mid] == target:
            return True
        elif array[mid] < target:
            l = mid+1
        else:
            r = mid
    return False

p = int(input())
for i in range(p):
    lb, rb = map(int, input().split())
    
    print(bisect.bisect_right(audience, rb) - bisect.bisect_left(audience, lb))