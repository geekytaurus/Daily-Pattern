height = int(input("\nEnter the height of V : "))
width = (2 * height) - 1


print("\n")
for i in range(1, height+1):
    for j in range(1, width+1):
        if(j == i or j == (width-i+1)):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
