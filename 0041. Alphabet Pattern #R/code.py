height = int(input("\nEnter the height of R : "))

width = height - 2
half = (height // 2)
print()

for i in range(0, height):
    print("*", end='')
    for j in range(0, width):
        if( (i == 0 or i == half) and j < (width - 2) ):
            print("*", end='')
        elif( j == (width - 2) and (not(i == 0 or i == half)) ):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
