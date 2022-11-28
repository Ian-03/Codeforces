t = int(input())

for i in range (t):

    n, q = map(int, input().split()) 
    #n -> len array, q -> number of queries

    a = list(map(int, input().split()))
    #a -> elements of the array

    counter = 0

    for j in a:
        if j % 2 == 0:
            counter += 1

    evens = counter
    odds = n - counter
    res = sum(a)

    for j in range (q):

        type, x = map(int, input().split())

        if type:
            res += odds * x
            if x % 2 != 0:
                evens, odds = n, 0
        else:
            res += evens * x
            if x % 2 != 0:
                evens, odds = 0, n

        print(res)