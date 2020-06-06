a=[1,2,'hello','bye']
print(a[2])
a[0]='new content'
print(a)
b=('a','hello','old')
print(b)
b=("better","tuple")
print(b)
a.append(list(b))
print("hello" in a)
print(a)