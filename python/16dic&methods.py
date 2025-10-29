d={}#it is an empty dictionary
data={
    "sandipan":99,
    'rohan':100,
    "prateek":[1,2,3]
}# here "sandipan" is the index/key and 99 is the value at the index
# can't have duplicate keys
print(data,type(data))
print(data["rohan"])
print(data["prateek"])

print(data.items())
print(data.keys())
print(data.values())
data.update({'sandipan':100, 'ritika':56})# .update() it add & update data in dict at an index.
print('\n',data)
# we pass dictionary inside update()
n={'sandipan':97, 'ritik':90}
data.update(n)
print(data)# hence dict is mutable

print(data.get("ritika"))# if passed value is absent retuns 'none'
print(data["prateek"])# if passed value is absent it causes error 

# data.clear()# clears the dict
data.pop("sandipan",99)# deletes the index along with the value
print(data)
print(data.popitem())# pops the last inputed index along with the value
print(data)