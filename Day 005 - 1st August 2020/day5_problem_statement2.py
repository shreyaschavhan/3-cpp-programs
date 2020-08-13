# 2. Write a program to get the difference between a given number and 17,
# if the number is greater than 17 return double the absolute difference.
# Ex.
# 22 is greater than 17 so output should be -- (22 - 17) * 2 = 10
# 14 is less than 17 so output should be -- (17 - 14) = 3

num = int(input("Enter a number: "))
if num > 17:
    print("Ans: ", (num - 17) * 2 )
else:
    print("Ans: ", 17 - num)
