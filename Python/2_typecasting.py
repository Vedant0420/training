#typecasting = the process of converting a variable from one data type to another data type.
#              str(), int(), float(), bool() are the inbuilt functions used for typecasting in python.
name = "Vedant"
age = 19
cgpa = 8.45
is_student = True

print(type(name))       #output: <class 'str'>
print(type(age))        #output: <class 'int'>
print(type(cgpa))       #output: <class 'float'>
print(type(is_student)) #output: <class 'bool'>


age = float(age)
print(age)
