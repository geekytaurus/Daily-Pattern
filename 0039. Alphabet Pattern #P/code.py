height = int(input("\nEnter the height of P : "))

for i in range(0, height):
    print("*", end='')
    for j in range(0, height):
        if( (i == 0 or i == height//2 - 1) and (j < height - 1) ):
            print("*", end='')
        elif(i < height//2 - 1 and j == height - 1 and i != 0):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
