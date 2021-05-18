height = int(input("\nEnter the height of Z : "))

print()
for i in range(1, height+1):
    for j in range(1, height+1):
        if(i == 1 or i == height or j == (height-i+1)):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
