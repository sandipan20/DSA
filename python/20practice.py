a=int(input("enter the no"))
b=int(input("enter the no"))
c=int(input("enter the no"))
d=int(input("enter the no"))
if(a>b and b>c and c>d):
    print("a is greatest i.e ",a)
elif(b>c and c>d and d>a):
    print("b is greatest i.e",b)    
elif(c>d and d>a and a>b):
    print("c is greatest i.e",c)
else:
    print("d is the greatest i.e",d)        


pcm=int(input("enter the pcm marks combined "))

litrature=int(input("enter the litrature marks combined "))

social_science=int(input("enter the social science marks combined "))

total_per=(pcm+litrature+social_science)/3

if(total_per >=40 and pcm >=33 and litrature >=33 and social_science>=33):
    print("passed",total_per)
else:
    print("failed",total_per)


satatemet=input("enter the statement\t")
if (len(satatemet)<=10):
    print("yes this program contain less than 10 charecter ")
else:
    print("this program contain more than 10 char")


l=['sandipan','ayushi','ajit','sahashi bala']
name=input("enter the name:- ")
if (name in l):
    print(name+" in the list ")
else:
    print(f"{name} is not in the list  ")

post=input("enter the post ")
if ("sandipan" in post.lower()):
    print("sandipan is in the post ")
else:
    print("this post doesen't talks about the indivisual sandipan")