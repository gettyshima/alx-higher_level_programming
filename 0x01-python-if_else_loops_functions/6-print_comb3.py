#!/usr/bin/python3
for i in range(0, 10):
    for j in range(0, 10):
        if not ((i == 8) and (j == 9)) and i != j and i < j:
            print("{}{}, ".format(i, j), end="")
print("{}".format(89))
