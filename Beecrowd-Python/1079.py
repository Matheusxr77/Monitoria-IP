# Lê o número de casos de teste
N = int(input())

# Loop para cada caso de teste
for _ in range(N):
    valores = list(map(float, input().split()))  # Lê os três valores reais
    
    # Peso para cada valor
    pesos = [2, 3, 5]
    
    # Calcula a média ponderada
    media_ponderada = sum(valores[i] * pesos[i] for i in range(3)) / sum(pesos)
    
    # Imprime a média ponderada com uma casa decimal
    print("{:.1f}".format(media_ponderada))
