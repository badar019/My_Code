def add(a,b):#addition
    return a+b
def subtract(a,b):#subtract
    return a-b
def multiply(a,b): #multiply
    return a*b
def divide(a,b):
    if b== 0:
        return "Invslid"
    return a/b

print("Select a choice.")
print("1.Add 2.Subtract 3.Multiply 4.Divide. ")

num1= float(input("Enter the first  number: "))
num2 =float(input("Enter the second number: "))

choice = input("Select your choice (1/2/3/4): ")

if choice =='1':
    print(f"Result: {add(num1,num2)}")
elif choice =='2':
    print(f"Result: {subtract(num1,num2)}")
elif choice =='3':
    print(f"Result: {multiply(num1,num2)}")
elif choice == '4':
    print(f"Result: {divide(num1,num2)}")
else :
    print("Invalid choice.")