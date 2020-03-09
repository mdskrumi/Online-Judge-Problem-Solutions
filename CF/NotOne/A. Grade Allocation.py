def ini():
    n = input()
    return int(n)


testCase = ini()
while testCase > 0:
    testCase-=1
    n,m=(int(i) for i in input().split())
    l = (int(i) for i in input().split())
    print(min(m,sum(l)))