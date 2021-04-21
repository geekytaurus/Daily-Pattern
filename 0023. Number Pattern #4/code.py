rows = int(input("Enter the number of Rows : "))

print("0 ")
for i in range(rows, 0, -1):
    for j in range(i, rows+1):
        print(j, end=" ")
    print("0", end=" ")
    for j in range(rows, i-1, -1):
        print(j,end=" ")
    print()


       
