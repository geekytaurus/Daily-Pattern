height = int(input("\nEnter the height of K : "))

width = height - 2

for i in range(1, (height//2)+1+1):
    for j in range(1, width+1):
        if(j == 1 or j == (width-i-1)):
            print("*", end='')
        else:
            print(" ", end='')
    print()
for i in range((height//2), 0, -1):
    for j in range(1, width+1):
        if(j == 1 or j == (width-i-1) ):
            print("*", end='')
        else:
            print(" ", end='')
    print()

print("\n\n")
