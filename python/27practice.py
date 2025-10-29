with open("poem.txt") as f:
    content=f.read()
if("twinkel" in content):
    print("it is present in content")
else:
    print("content is not present")


def generatetable(n):
    table=""
    for i in range(1,11):
        table +=f"{n}x{i}={n*i}\n"

    with open(f"table-{n}.txt","w") as f:
        f.write(table)

for i in range (1,21):
    generatetable(i)



with open("poem.txt","r") as f:
    content=f.read()
contentnew=content.replace("donkey","##$$")
with open("poem.txt","w")as f:
    f.write(contentnew)


with open("cencer.txt","r") as c:
    words=c.readlines()
with open("censerfile.txt","r") as f:
    content=f.read()
for words in content:
    contentnew=content.replace(words,"##$$")
with open("censerfile.txt","w")as f:
    f.write(contentnew)
