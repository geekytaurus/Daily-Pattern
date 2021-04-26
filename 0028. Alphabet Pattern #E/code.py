height = int(input("\nEnter the height of E : "))


mid = height // 2 + 1

print("\n\n")
for i in range(1, height+1):
    for j in range(1, height):
        if(i == 1 or j == 1 or i == mid or i == height):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")



