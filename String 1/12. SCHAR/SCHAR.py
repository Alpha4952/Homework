import sys
sys.stdin = open('BAI3.inp', 'r')
sys.stdout = open('BAI3.out', 'w')
t = int(input())

def cpp (a: str):
	h = [0]*26
	for i in a:
		h[ord(i) - ord('a')] += 1
	return h

r = ''
for i in range (1, t+1):
	s = input(); hmm = cpp(s); f = 1;
	for n in range(len(s)):
		if hmm[ord(s[n]) - ord('a')] == 1:
			r += str(n+1) + '\n'
			f = 0
			break
	if f:
			r += '-1\n'
print(r)