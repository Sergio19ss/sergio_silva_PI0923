print("30 primeiros números pares:")
for i in range(1, 61):
    if i % 2 == 0:
        print(i, end=" ")

print("\n\n30 primeiros números ímpares:")
for i in range(1, 61):
    if i % 2 != 0:
        print(i, end=" ")