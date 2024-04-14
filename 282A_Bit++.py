n = int(input())
p = [input() for _ in range(n)]
x = 0
for s in p:
    if "++" in s:
        x += 1
    else:
        x -= 1
print(x)
