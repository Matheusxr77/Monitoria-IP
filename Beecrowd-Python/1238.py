# Recebe o número de casos de teste (N)
N = int(input())

# Loop para cada caso de teste
for i in range(N):
    # Recebe o texto como entrada
    texto = input()
    
    # Divide o texto em duas partes usando espaços como delimitador
    entradas = texto.split(' ')
    
    # Inicializa uma string vazia para armazenar o texto decodificado
    decodificado = ""

    # Inicializa um índice
    index = 0

    # Loop enquanto houver caracteres em pelo menos uma das partes
    while index <= len(entradas[0]) - 1 or index <= len(entradas[1]) - 1:
        # Adiciona o caractere da primeira parte, se existir
        if index <= len(entradas[0]) - 1:
            decodificado += entradas[0][index]
        # Adiciona o caractere da segunda parte, se existir
        if index <= len(entradas[1]) - 1:
            decodificado += entradas[1][index]

        # Incrementa o índice
        index += 1
    
    # Imprime o texto decodificado para o caso de teste atual
    print(decodificado)