t = int(input())

for t in range (t):

    n, a, b = map(int, input().split())

    s = input()

    t0 = n * b + n * a
    
    tc = 0
    t1 = 0
    counter = 0

    for i in range (n):
        if s[i] == '0':
            tc += 1
            counter += 1
        else:
            if counter:
                t1 += counter * a + b
                counter = 0

    if counter:
        t1 += counter * a + b

    if n != tc:
        t1 += (n - tc) * a + b

    tc = 0
    t2 = 0
    counter = 0

    for i in range (n):
        if s[i] == '1':
            tc += 1
            counter += 1
        else:
            if counter:
                t2 += counter * a + b
                counter = 0
                
    if counter:
        t2 += counter * a + b

    if n != tc:
        t2 += (n - tc) * a + b

    print(max(t1, t2, t0))