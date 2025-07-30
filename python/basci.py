#this is comment
"""thi is multi 
line comment"""

p=10

if(p>7):
    print("the num is greater")
else:
    print("the num is less")

#variable
name="chaitanya"
age= 20
passed= True
print("name:"+name)
print(age)    
print(passed)    



#local vareable 
icecream="Choclate"
def food():
    vegetable="potato"
    fruit="Banana"
    print("vegetable local variable"+vegetable)
    print("fruit locla variable"+fruit)
    print("icecream global variable"+icecream)

food()
print("outside the fun global variable"+icecream)

# sequence data
#list
list1=[8,8.2,[2,3],["apple","apple"]]
print(list1)

#tuple
tuple1=(("happy","hello"),("good morning","nice day"))
print(tuple1)

#range
sequence=range(4,14,2)

for i in sequence:
    print(i)

dict1={"name":"ram","age":19,"cnavote":True}
print(dict1)    