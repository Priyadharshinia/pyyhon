m=int(input())
b=list(map(int,input().split()))
r=b.index(max(b))
s=b.index(min(b))
print(s+1,r+1)
