a=int(input("enter the a "))
b=int(input("enter the b "))
c=int(input("enter the c "))
def greatest(a,b,c):
    if (a>b and a>c):
        return a
    elif(b>c and b>a):
        return b
    else:
        return c
print(greatest(a,b,c))

print("hello ", end="")
print(" ritik")

def sum(n):
    if(n==1):
        return 1
    return sum(n-1)+n
n=int(input("enter the no that is to be added"))
print(sum(n))
