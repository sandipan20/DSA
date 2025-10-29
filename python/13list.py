l=['name',"sandipan",56,56.23,True]
print(type(l))
print(l[0])
l[0]="sandy"
print(l[0])
# these are mutable
# slicing also work in list
print(l[0:4])
print(l[0:4:2])

# list methods

l.append(97)# adds element in the end of the list
print(l) 

l.insert(3,'sandipan')# it works as the insertion toll for list but it is advance 
# first arguent is the index & second is the value.
print(l)

n=[2,56,23,97,1,3,9726,51651,0]

n.reverse()
print(n)

n.sort()
print(n)

print(l.pop(0)) # deletes an element at given index
print(l)

l.remove("sandipan")# it removes the first occurence of the given element from list 
print(l)