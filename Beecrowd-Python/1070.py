# Lê o valor inteiro X
x = int(input())

# Verifica se X é ímpar e ajusta para o próximo ímpar, se necessário
if x % 2 == 0:
    x += 1

# Imprime os próximos 6 valores ímpares consecutivos
for _ in range(6):
    print(x)
    x += 2