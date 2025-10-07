n, m = tuple(map(int, input().split()))

num = [i+1 for i in range(n)]
uk = []
vk = []

for i in range(m):
    u, v = tuple(map(int, input().split()))
    if (u in num):
        num.remove(u)
    if (v in num):
        num.remove(v)
    if (len(uk) == 0 or u not in uk):
        vk.append(v)
        if (u not in vk):
            uk.append(u)
    else:
        vk.append(v)

print(len(uk) + len(num))