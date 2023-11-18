# Recebe o número de casos de teste
for teste in range(1, int(input()) + 1):
    # Imprime os valores formatados para cada teste
    print("{} {} {}".format(teste, teste**2, teste**3))