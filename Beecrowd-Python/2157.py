# Recebe o valor de C
C = int(input())

# Loop enquanto C for maior que 0
while C > 0:
    C -= 1  # Decrementa o valor de C

    # Recebe os valores de B e E
    B, E = input().split()
    S = ""  # Inicializa uma string vazia

    # Loop para cada número no intervalo de B a E (inclusive)
    for x in range(int(B), int(E) + 1):
        S += str(x)  # Concatena o número à string S

    # Concatena a reversa da string S ao final de S
    S += S[::-1]

    # Imprime a string resultante
    print(S)