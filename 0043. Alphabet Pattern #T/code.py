height = int(input("\nEnter the height of T : "))

width = height + 3
mid = width // 2 + 1

print()
for i in range(1, height+1):
    for j in range(1, width+1):
        if(i == 1 or j == mid):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
