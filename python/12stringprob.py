scen=input("enter a message ")
print("good afternoon "+scen+" arigato")

letter='''\n

Dear [Teacher's Name],

I hope this letter finds you well. I wanted to take a moment to thank you for your hard work and dedication. Your guidance and support have made a big difference in my learning, and I truly appreciate all that you do to help me and my classmates succeed.

Thank you for being such an inspiring teacher.

Sincerely,
[Your Name]'''

print(letter.replace("Your Name","sandipan").replace("Teacher's Name","abha akushik"))

print(f"good afternoon {scen} arigato")# this is a new concept in which you mark an string as f string
# then you can pass any variable inside string using this {__}, without using the +___+ function to pass
# some variable in the middle of the string -> applicable after 3.6 python only not recomended to use in exams


sanji="nama  jhr"
print(sanji.find("  "))
print(sanji.replace("  "," "))
# since string are immutable therfore there will be no changes in the main string
print(sanji)


letter2="Dear [\"Teacher's Name\"],\n\t thank you for your dedication and support in helping me grow and succeed."
print(letter2)