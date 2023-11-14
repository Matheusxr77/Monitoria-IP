# Lê a hora inicial, minuto inicial, hora final e minuto final do jogo
hora_inicial, minuto_inicial, hora_final, minuto_final = map(int, input().split())

# Calcula a duração do jogo
inicio_em_minutos = hora_inicial * 60 + minuto_inicial
final_em_minutos = hora_final * 60 + minuto_final

if inicio_em_minutos <= final_em_minutos:
    duracao_em_minutos = final_em_minutos - inicio_em_minutos
else:
    duracao_em_minutos = 24 * 60 - inicio_em_minutos + final_em_minutos

# Trata o caso especial de duração de 24 horas
if duracao_em_minutos == 0:
    duracao_horas = 24
    duracao_minutos = 0
else:
    duracao_horas = duracao_em_minutos // 60
    duracao_minutos = duracao_em_minutos % 60

# Imprime a duração do jogo no formato solicitado
print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(duracao_horas, duracao_minutos))