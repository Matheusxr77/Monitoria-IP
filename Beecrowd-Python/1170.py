# Recebe o número de casos de teste (N)
N = int(input())

# Loop para cada caso de teste
for x in range(N):
    # Recebe o valor inicial (C)
    C = float(input())
    
    # Inicializa uma variável contadora
    i = 0
    
    # Loop enquanto C for maior que 1
    while C > 1:
        C /= 2
        i += 1  # Incrementa a contagem de dias
    
    # Imprime o número de dias necessário para C se tornar menor ou igual a 1
    print(f"{i} dias")