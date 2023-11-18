# Recebe dois valores como entrada
x = int(input())
y = int(input())

# Inicializa a variável de soma
soma = 0

# Garante que x seja menor ou igual a y
if x > y:
    x, y = y, x

# Loop sobre o intervalo de x até y (inclusive)
for a in range(x, y+1):
    # Verifica se o número não é divisível por 13
    if not (a % 13 == 0):
        soma = soma + a

# Imprime o resultado da soma
print(soma)