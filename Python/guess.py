# write a python program to guess a number
import random

random_number =random.randint(1,5)
operation=1
while(True):
    num =int(input("Take a number from 1 to 5: "))
    if(num ==random_number):
        print(f'Congratulations,you have guessed the correct number.you tried {operation} times.')
        break
    elif (num > random_number):
        print("Too high")
    elif (num < random_number):
        print("Too low")
    operation=operation+1
