# write python program to find factorial of a number

def factorial(n):
    if(n==1):
        return 1
    return n*factorial(n-1)

n=5
print(f"Factorial of {n} is {factorial(n)}")