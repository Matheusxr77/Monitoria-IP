# Loop principal
while True:
    # Inicializa variáveis
    notas_validas = 0
    soma_notas = 0

    # Loop para obter duas notas válidas
    while notas_validas < 2:
        nota = float(input())

        # Verifica se a nota está no intervalo de 0 a 10
        if nota < 0 or nota > 10:
            print("nota invalida")
        else:
            notas_validas += 1
            soma_notas += nota

    # Calcula a média das duas notas
    media = soma_notas / 2
    print("media = {:.2f}".format(media))

    # Loop para verificar se o usuário deseja realizar um novo cálculo
    while True:
        print("novo calculo (1-sim 2-nao)")
        x = int(input())

        # Se o usuário escolhe 1, sai do loop interno e realiza um novo cálculo
        if x == 1:
            break
        # Se o usuário escolhe 2, encerra o programa
        elif x == 2:
            exit()