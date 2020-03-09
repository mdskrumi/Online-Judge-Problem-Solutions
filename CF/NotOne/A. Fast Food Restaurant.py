def ini():
    n = input()
    return int(n)

testCase = ini()
while testCase > 0:
    testCase-=1
    ans = 0
    a,b,c = (int(i) for i in input().split())
    if a > 0:
        a-=1
        ans+=1
    if b > 0:
        b-=1
        ans+=1
    if c > 0:
        c-=1
        ans+=1
    l = [a,b,c]
    l.sort()
    c,b,a = l
    if a > 0 and b > 0:
        a-=1
        b-=1
        ans+=1
    if a > 0 and c > 0:
        a-=1
        c-=1
        ans+=1
    if b > 0 and c > 0:
        c-=1
        b-=1
        ans+=1
    if a > 0 and b > 0 and c > 0:
        ans+=1
    print(ans)