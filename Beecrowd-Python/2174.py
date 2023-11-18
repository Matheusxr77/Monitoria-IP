# Recebe o número de pokémons na mochila (N)
N = int(input())

# Inicializa uma lista vazia chamada 'mochila' para armazenar os pokémons
mochila = []

# Loop para preencher a mochila com os pokémons
for i in range(N):
    mochila.append(input())

# Converte a lista 'mochila' em um conjunto para remover duplicatas
mochila = set(mochila)

# Calcula o número de pokémons ausentes (151 é o total de pokémons)
pokemon = 151 - len(mochila)

# Imprime a quantidade de pokémons ausentes
print(f"Falta(m) {pokemon} pokemon(s).")