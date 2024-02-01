n = open('WORDS.inp', 'r').read().split()
r = ''

r += str(len(n)) + '\n'
for i in n:
    r += i + '\n'
open('WORDS.out', 'w').write(r)