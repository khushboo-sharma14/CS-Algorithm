def isVowel(c):
  if(c =='a' or c=='e' or c=='i' or c=='o' or c=='u'):
    return True
def longest_vowel(s):
  count=0
  res=''
  s1=''
  for i in range(len(s)):
      if(isVowel(s[i])==True):
          count+=1
          s1+=s[i]
          print(count)
      else:
          if(len(s1)>len(res)):
              res=s1
          s1=''
          count=0
  if(len(s1)>len(res)):
      res=s1
  return res
s=input()
print(longest_vowel(s))
