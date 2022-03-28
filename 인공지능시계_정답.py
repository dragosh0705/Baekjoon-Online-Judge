a,b,c = map(int, input().split())
d = int(input())
t = 0
h = 0
m = 0
t = h*60*6 + b*60 +c +d
h = t//60//60 %24
m = t//60%60
s = t%60
print(h,m,s)
