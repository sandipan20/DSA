name = "sandipan"
sl=name[0:5]# it slices a name from first index till second index (excludes second index place string)
print(sl)
a=name[5]
print(a)
b=name[-4]
print(b)
print(name[-5:-2])
print(name[:])# if there is nothing passed at [x:y] x and y then by default x=0 and y=-1, so that there we can print full string without any error
print(name[0:6:2])#[x:y:z] x & y are same as befor but in this type of slicing,
# z is used to jump z elements after x and print the last jumped element then jump again till it reaches y.