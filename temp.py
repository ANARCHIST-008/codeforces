t = int(input())
for _ in range(t):
    n = int(input())
    s = input().strip()
    counts = []
    for i in range(n):
        chars = list(s)
        chars[i] = '1' if chars[i] == '0' else '0'
        counts.append(chars.count('1'))
    print(*counts)
