height = int(input("\nEnter the height of G : "))

width = height - 2
mid = height//2 + 1

for i in range(1, height):
    for j in range(1, width):
        if( (i == 1 or i == height) and (j != 1) ):
            print("*", end='')
        elif((j == 1) and (i != 1) and (i != height)):
            print("*", end='')
        elif(i > mid and j == width):
            print("*", end='')
        elif((j >= height//2) and (i == mid)):
            print("*", end='')
        else:
            print(" ", end='')
    print()
print("\n\n")


