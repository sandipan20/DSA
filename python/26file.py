#5 54 11
# here we are reading a file

f=open("file.txt","r")
data=f.read()
print(data)
f.close()

# use open then close it 
# if using with open() then it closes automatically


# no we will see how to write in a file

st="hey sandipan how are you "
f=open("nfile.txt","w")
f.write(st)
f.close()

f=open("file.txt")
lines=f.readlines()# it returns the list of the lines in the file
print(lines,type(lines))
f.close()

f=open("file.txt")
line1=f.readline() # this returns the string 
print(line1,type(line1))
f.close()

f=open("file.txt")
lines=f.readlines
while(lines!=""):
    print(lines)
    lines=f.readline()
f.close()

'''
modes of opening file

r- open for reading
w- openn for writing
a- open for appending
+-open for updating
'rb'- open for read in binary
'rt'-will open for read in text mode

'''

with open("file.txt") as f:
    print(f.read())
# there is no need to close the file because it closes automatically after comming out of indentatin
