height = int(input("\nEnter the height of F : "))

mid = height // 2

print("\n\n")
for i in range(1, height+1):
    for j in range(1, height+1+1):
        if(i == 1 or j == 1):
            print("*", end='')
    
    for j in range(1, mid+1+1):
        if(i == mid):
            print("*", end='')
    print()
print("\n\n")


