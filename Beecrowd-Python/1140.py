while True:
    entrada = input().split()

    # Verifica se a entrada contém apenas um caractere ('*') e encerra o loop
    if len(entrada) == 1 and len(entrada[0]) == 1 and entrada[0] == '*':
        break

    tamanho = len(entrada)
    frase = []

    # Converte a primeira letra de cada palavra para maiúscula e armazena em uma lista
    for i in range(tamanho):
        frase.append(entrada[i][0].upper())

    tamanho = len(frase)

    # Verifica se todas as palavras começam com a mesma letra maiúscula
    if frase.count(frase[0]) == tamanho:
        print("Y")
    else:
        print("N")