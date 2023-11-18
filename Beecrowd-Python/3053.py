# Define a função 'movimento' que recebe a posição atual e a jogada como parâmetros
def movimento(pos_atual, jogada):
    # Mapeia as jogadas para as posições correspondentes
    if jogada == 1:
        v1, v2 = "A", "B"
    elif jogada == 2:
        v1, v2 = "B", "C"
    elif jogada == 3:
        v1, v2 = "A", "C"

    # Verifica a posição atual e realiza a troca com base na jogada
    if pos_atual == v1:
        return v2
    elif pos_atual == v2:
        return v1
    else:
        return pos_atual

# Recebe o número de jogadas como entrada
N = int(input())

# Recebe a posição inicial como entrada
pos_atual = input()

# Loop para cada jogada
for m in range(N):
    # Recebe a jogada como entrada
    jogada = int(input())
    # Atualiza a posição atual chamando a função 'movimento'
    pos_atual = movimento(pos_atual, jogada)

# Imprime a posição final após as jogadas
print(pos_atual)