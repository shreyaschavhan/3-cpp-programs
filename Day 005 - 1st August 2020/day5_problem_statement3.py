# 3. Write a program to test if the input number by a user is in between 100 - 1000.
# Sample output :
# Enter a number: 150
# The number 150 is in between 100 - 1000.

print("We are testing here if the number you input is in between 100 - 1000 "
      "or not")
num = int(input(("So, Please enter a Number: ")))
print("Test Successful: ")

if 100 <= num <= 1000:
    print(num, " is in between 100 - 1000.")
elif num > 1000:
    print(num, " is higher than 1000.")
else:
    print(num, " is smaller than 100. ")
