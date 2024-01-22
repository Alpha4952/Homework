n = int(input())
a = input().split()

c = 0

for i in a:
    t = [int(_) for _ in list(i)]
    t2 = t.copy()
    t2.sort()
    if t == t2:
        c+=1
        
print(c)