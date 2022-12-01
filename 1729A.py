t = int(input())

for i in range (t):

    a, b, c = map(int, input().split())

    t1 = abs(1 - a)

    t2 = abs(1 - c) + abs(b - c)

    if t1 == t2:
        print(3)
    elif t1 > t2:
        print(2)
    else:
        print(1)