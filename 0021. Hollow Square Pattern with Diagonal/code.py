n = int(input("Enter the number of Rows : "))

for i in range(1, n+1):
    for j in range(1, n+1):
        if (i == 1 or i ==n or j == 1 or j == n or j == n-i+1 or i == j):
            print("*", end='')
        else:
            print(" ", end='')
    print()
