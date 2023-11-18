# Recebe a quantidade de casos de teste (C)
C = int(input())

# Dicionário que define as opções vitoriosas para cada escolha
escolha_vitoriosa = {"pedra": ["tesoura", "lagarto"], 
                     "papel": ["pedra", "spock"], 
                     "tesoura": ["papel", "lagarto"], 
                     "lagarto": ["papel", "spock"], 
                     "spock": ["pedra", "tesoura"]}

# Loop para cada caso de teste
for x in range(C):
    # Recebe as escolhas de Rajesh e Sheldon
    rajesh, sheldon = input().split()

    # Verifica se as escolhas são iguais, resultando em empate
    if rajesh == sheldon:
        print("empate")
    # Verifica se a escolha de Sheldon está na lista de escolhas vitoriosas de Rajesh
    elif sheldon in escolha_vitoriosa[rajesh]:
        print("rajesh")
    # Se não for empate e a escolha de Sheldon não for vitoriosa para Rajesh, então Sheldon vence
    else:
        print("sheldon")