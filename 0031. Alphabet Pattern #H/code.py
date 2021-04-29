height = int(input("\nEnter the Height of H : "))

width = height
mid = (height // 2) + 1

print("\n")
for i in range(1, height + 1):
    for j in range(1, width + 1):
        if (j == 1 or j == width or i == mid):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")

