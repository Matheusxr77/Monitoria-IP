# ler o tempo gasto na viagem (em horas) e a velocidade média (em km/h)
tempo_viagem = int(input())
velocidade_media = int(input())

# consumo médio do automóvel em km/l
consumo_medio = 12

# calcular a distância percorrida
distancia_percorrida = tempo_viagem * velocidade_media

# calcular a quantidade de litros necessária
litros_necessarios = distancia_percorrida / consumo_medio

# mostrar o resultado
print(format(litros_necessarios, ".3f"))