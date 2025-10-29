words={
    'maddaad':"help",
    'nav':'boat',
    'pitr naam':'surname',
    10:"das"
}
search=input('enter the searching word ')
print(words[search])

number=set()
n=input('enter the no ')
number.add(n)
n=int(input('enter the no '))
number.add(n)
n=int(input('enter the no '))
number.add(n)
n=int(input('enter the no '))
number.add(n)
n=int(input('enter the no '))
number.add(n)
n=int(input('enter the no '))
number.add(n)
n=int(input('enter the no '))
number.add(n)
n=int(input('enter the no '))
number.add(n)
print(number)
print(len(number))

d={}# key value have to be unique because it act as the index 
# but if the key value gets repeted it will simply get uppdated with the last entered value

name=input('enter their name ')
language=input('enter the language ')
d.update({name:language})

name=input('enter their name ')
language=input('enter the language ')
d.update({name:language})

name=input('enter their name ')
language=input('enter the language ')
d.update({name:language})

name=input('enter their name ')
language=input('enter the language ')
d.update({name:language})

print(d)

