row, col = [int(x) for x in input("Enter the number of rows and cols : ").split()]
for i in range(row):
    for j in range(col):
        if (i==0 or i==row-1 or j==0 or j==col-1):
            print("*", end='')
        else:
            print(" ", end = '')
    print("\n", end = '')


