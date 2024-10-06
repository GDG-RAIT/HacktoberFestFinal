string=input()
list_=string.split()
new=list_[::-1]
string_=""
for i in new:
     string_=string_+' '+i
print(string_)

