n = int(input())
s = input()

t = int((n + 1) / 2)

if(n % 2 == 0):
    print('No')
    exit()

for i in range(t-1):
    if s[i] != '1':
        print('No')
        exit()

if s[t-1] != '/':
    print('No')
    exit()

for i in range(t-1):
    if s[i+t] != '2':
        print('No')
        exit()


print('Yes')
