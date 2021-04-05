row = int(input("Enter the number of rows : "))
rows = row + 1

for i in range(rows, 1, -1):
    for sp in range(1, rows-i+1):
        print(" ", end='')
    for j in range(1, i-1 +1):
        print("* ", end='')
    print()
    
