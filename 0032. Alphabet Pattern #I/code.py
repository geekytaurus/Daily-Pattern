height = int(input("\nEnter the height of I : "))

width = height - 2
mid = (width // 2) + 1

for i in range(1, height+1):
    for j in range(1, width+1):
        if(i == 1 or i == height or j == mid):
            print("*", end='')

        else:
            print(" ", end='')
    print()

print("\n\n")   
