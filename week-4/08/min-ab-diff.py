import sys


n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# your code goes here
a.sort()
m=a[-1]-a[0]
for i in range(1,n):
    if a[i]-a[i-1]<m:
        m=a[i]-a[i-1]
print(m)
