# Lê a hora inicial e a hora final do jogo
hora_inicial, hora_final = map(int, input().split())

# Calcula a duração do jogo
if hora_inicial < hora_final:
    duracao = hora_final - hora_inicial
else:
    duracao = 24 - hora_inicial + hora_final

# Imprime a duração do jogo 
print("O JOGO DUROU {} HORA(S)".format(duracao))