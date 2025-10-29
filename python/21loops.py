# for loops & while loops
i=1
while(i<10):
    print("sandipan")
    i+=1

for i in range(4):
    print(i)

li=[4,56,562,41,2,3,102,560,54165]
for i in li:
    print(i)
 
na="sandipan"
for i in na:
    print(i)

tu=(56,563,78,39,3)
for i in tu:
    print(i)

# for loop with else

for i in range(0,51):
    print(i)
else:# the else block executes when the for block get finished
    print("all done")

# break continue 

for i in range(100):
    if(i==21):
        break # breaks the loop after 20
    print(i)

for i in range(20):
    if (i==10):
        continue # continue after skipping 10
    print(i)

for i in range(25):
    pass # pass used to pass the block with a fill in the blanks so that it won't create any error
# you can write the code later if you want to write the code its a tempory solution to pass the block
# you don't want to write