rows = int(input("Enter the number of rows : "))

for i in range(1, rows+1):
    for j in range(1, 2*i):
        if(j % 2 == 0):
            print("*", end='')
        else:
            print(i, end='')
    print()

for i in range(rows, 0, -1):
    for j in range(1, 2*i):
        if(j % 2 == 0):
            print("*", end='')
        else:
            print(i, end='')
    print()
