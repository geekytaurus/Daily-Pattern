rows = int(input("Enter the number of rows : "))

for i in range(1, rows+1):
    for j in range(1, rows-i+2):
        if(i == 1 or i == rows or j == 1 or j == rows-i+1):
            print("*", end='')
        else:
            print(" ", end='')
    print()
