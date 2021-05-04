height = int(input("\nEnter the height of L : "))

width = height

print("\n")
for i in range(1, height + 1):
    for j in range(1, width + 1):
        if(j == 1 or i == height):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
