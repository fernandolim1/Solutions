import sys

d = {
    'A': '.-',
    'B': '-...',
    'C': '-.-.',
    'D': '-..',
    'E': '.',
    'F': '..-.',
    'G': '--.',
    'H': '....',
    'I': '..',
    'J': '.---',
    'K': '-.-',
    'L': '.-..',
    'M': '--',
    'N': '-.',
    'O': '---',
    'P': '.--.',
    'Q': '--.-',
    'R': '.-.',
    'S': '...',
    'T': '-',
    'U': '..-',
    'V': '...-',
    'W': '.--',
    'X': '-..-',
    'Y': '-.--',
    'Z': '--..',
    '_': '..--',
    ',': '.-.-',
    '.': '---.',
    '?': '----',
}

rev = {d[c]:c for c in d}

for line in sys.stdin.readlines():
    m = ''
    e = []
    for c in line.strip():
        m += d[c]
        e.append(len(d[c]))
    j = 0
    ans = ''
    for f in e[::-1]:
        t = m[j:j+f]
        print(rev[t], end='')
        j += f 
    print()