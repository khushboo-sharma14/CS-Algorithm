url=input()
t=int(input())
for i in range(t):
  s=input()
  if(s in url):
    s1=s+'='
    m=url.split(s1)
    m=m[1]
    res=''
    for i in m:
      if(i.isalpha()):
          res+=i
      else:
          break
    print(res)
  else:
    print(-1)
