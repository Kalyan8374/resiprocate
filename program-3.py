a = int(input("enter the value:"))

if a % 2 == 0:
    for i in range(1, a + a - 1):
        if i % 2 == 1:
            print(i)
elif a % 2 == 1:
    for i in range(1, a + a):
        if i % 2 == 1:
            print(i)
