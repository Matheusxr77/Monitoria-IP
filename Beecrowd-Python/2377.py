# Recebe o comprimento da estrada e a distância entre pedágios
L, D = map(int, input().split())

# Recebe o custo por quilômetro percorrido e o valor de cada pedágio
K, P = map(int, input().split())

# Calcula o número de pedágios ao longo da estrada
pedagios = int(L / D)

# Calcula o custo total da viagem
valor = (K * L) + (P * pedagios)

# Imprime o custo total da viagem
print(valor)