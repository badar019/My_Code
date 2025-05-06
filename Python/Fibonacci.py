
# Write a python program to print fibonacci of a number

def fibonacci(n):
    if(n<=1):
        return n
    return fibonacci(n-1)+fibonacci(n-2)

n,m = 6,8
print(f"Fibonacci of {n} is {fibonacci(n)}")
print(f"Fibonacci of {m} is {fibonacci(m)}")
