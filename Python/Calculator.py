def add(a,b):
    return a+b
def multiply(a,b):
    return a*b
def subtract(a,b):
    return a-b
def divide(a,b):
    if(b==0):
        return "Invalid"
    return a/b
num1=float(input("Enter the first number: "))
num2=float(input("Enter the second number:"))

print("Select your choice")
print("1.add 2.Subtract 3.Multiply 4.Divide ")

choice =input("choice (1/2/3/4)")

if choice =='1':
    print("Result: ",add(num1,num2))
elif choice =='2':
    print("Result: ",subtract(num1,num2))
elif choice=='3':
    print("Result: ",multiply(num1,num2))
elif choice=='4':
    print("Result: ",divide(num1,num2))
else:
    print("Invalid",)