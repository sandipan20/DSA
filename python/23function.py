#this is the function definetion
def avg():
    a=int(input("enter the no for the average"))
    b=int(input("enter the no for the average"))
    c=int(input("enter the no for the average"))

    average =(a+b+c)/3
    print(average)
    return average

#this is the function calling
a=avg()
avg()
avg()
avg()
avg()


#function with argument

def goodbye(name,ending):# for default argument def goodbye(name,ending="thnx"): 
    # in this way the ending is always thnx .
    print("good day"+name)
    print(ending)
    return "done"
a=goodbye("harry", "thank you")
goodbye("rohan", "thank you")
print(a)