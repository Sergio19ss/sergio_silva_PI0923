for i in range(10):
    num = int(input(f"Digite o {i+1}º número: "))
    if num % 2 == 0:
        print(f"{num} é Par")
    else:
        print(f"{num} é Ímpar")