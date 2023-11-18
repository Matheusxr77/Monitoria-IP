# Recebe a letra como entrada
letra = input()

# Recebe uma lista de palavras como entrada e a divide em uma lista de palavras
palavra = input().split()

# Inicializa a variável soma_letra como 0.0
soma_letra = 0.0

# Loop para cada palavra na lista de palavras
for x in palavra:
    # Verifica se a letra está presente na palavra
    if letra in x:
        soma_letra += 1  # Incrementa a soma_letra se a letra estiver presente na palavra

# Calcula a porcentagem de palavras que contêm a letra
soma_letra /= len(palavra) / 100

# Imprime o resultado formatado com uma casa decimal
print('%.1f' % soma_letra)
