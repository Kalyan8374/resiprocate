# Program make a simpple calculator
#This function add two numbers
def add (x,y):
    return x+y
# This function subtracts two numbers
def sub(x,y):
    return x-y
# This function multiplies two numbers
def mul (x,y):
    return x*y
# This function divides two numbers
def div(x,y):
    return x/y

print("To Select The on Operation:")
print("1.sub\n"
      "2.add\n"
      "3.multiplication\n"
      "4.division\n")
while True:
# Take input from user
    choices=input("select the option(1/2/3/4):")
    # check if choice is one of four options
    if choices in("1,2,3,4"):
        num1=float(input("Enter the Value"))
        num2=float(input("enter the second number"))

    if choices=="1":
        print("Total sum of",num1 ,"+",num2, "=",add(num1,num2))
    if choices=="2":
        print("Total subtraction of",num1 ,"-",num2, "=",sub(num1,num2))
    if choices=="3":
        print("Total Multiplication of",num1 ,"*",num2, "=",mul(num1,num2))
    if choices=="4":
        print("The Division of",num1 ,"/",num2, "=",div(num1,num2))
    #check if user wants another calculation
    #break the while loop if answer is no
    next_calculation = input("Let's do next calculation? (yes/no): ")
    if next_calculation == "no"
       break
else :
    print("your choice iws invalid")


