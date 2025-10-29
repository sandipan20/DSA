s=set()# it is used for creating empty set rather than s={} =>it creates empty  dictonary
print(type(s))
s1={1,56,2,2,1,1,0,0,0,0, 'sandipan'}
print(s1)
s2={1.25,56,0,99,97,2}
# methods

s1.add("sachchi")
print(s1)
print(len(s1))
s1.remove("sachchi")# s.pop() removes a random element . it takes no argument
print(s1)

print(s1.union(s2))# union of two sets
print(s2.intersection(s1))# intersections of two sets
