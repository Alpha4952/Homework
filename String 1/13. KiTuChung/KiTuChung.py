import sys
sys.stdin = open('KiTuChung.inp', 'r')
sys.stdout = open('KiTuChung.out', 'w')

a = input()
b = input()
aa = [0]*26
bb = [0]*26

for i in a:
	aa[ord(i)-ord('a')] += 1
for i in b:
	bb[ord(i)-ord('a')] += 1

for i in range(26):
	if aa[i] > 0 and bb[i] > 0:
		print(chr(i+ord('a')))