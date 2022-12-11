#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    new_number = number * -1
else:
    new_number = number
last_digit = new_number % 10
if last_digit > 5:
    print(f"Last digit of {number:d} is {last_digit:d} and is greater than 5")
elif last_digit < 6 and last_digit != 0:
    if number < 0:
        last_digit = last_digit * -1
    print(f"Last digit of {number:d} is {last_digit:d}\
      and is less than 6 and not 0")
else:
    print(f"Last digit of {number:d} is {last_digit:d} and is 0")
