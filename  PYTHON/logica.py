def eh_par(n):
    return n % 2 == 0

numero = int(input("Digite um número: "))

if eh_par(numero):
    print("O número é par.")
else:
    print("O número é ímpar.")

print(f"Contando até {numero}:")
for i in range(1, numero + 1):
    print(i)
