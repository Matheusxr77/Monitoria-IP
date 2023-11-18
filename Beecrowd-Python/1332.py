# Loop para cada caso de teste
for n in range(int(input())):
    # Recebe a entrada como texto
    entrada = input()
    i = 0  # Inicializa uma variável contadora

    # Verifica o comprimento da entrada
    if len(entrada) == 5:
        print("3")  # Se a entrada tiver 5 caracteres, imprime "3"
    else:
        # Verifica se os primeiros três caracteres formam a palavra "one"
        if entrada[0] == 'o':
            i += 1
        if entrada[1] == 'n':
            i += 1
        if entrada[2] == 'e':
            i += 1

        # Avalia a contagem e imprime o resultado correspondente
        if i >= 2:
            print("1")  # Se pelo menos dois dos três primeiros caracteres são 'one', imprime "1"
        else:
            print("2")  # Caso contrário, imprime "2"