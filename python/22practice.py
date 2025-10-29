# n=int(input("enter the no "))

# for i in range(1,11):
#     print(f"{n}x{i}={n*i}")

# l=['rohan','sandipan','ritik','harsh']
# for name in l:
#     if (name.startswith('r')):
#         print("hello "+name)

# n=int (input("enter the number "))
# i=1
# while(i<=10):
#     print(f"{n} x {i} = {n*i}")
#     i+=1

# n=int(input("enter the number "))
# for i in range(2,n):
#     if (n%i==0):
#         print("number is not prime ")
#         break
# else:
#     print("no is prime ")

# i=1
# n=int(input("enter the no"))
# sum=0
# while(i<=n):
#     sum+=i
#     i+=1
# print(sum)

# n=int(input("enter the no of the lines"))
# for i in range(1,n+1):
#     print(" "*(n-i),end="")
#     print("*"*(2*i-1),end="")
#     print("")

n=int(input("enter the no of lines"))
for i in range(1,n+1):
    if(i==1 or i==n):
        print("* "*n,end="")
    else:
        print("*",end="")
        print(" "*(n-2),end="")
        print("*",end="")
    print("")