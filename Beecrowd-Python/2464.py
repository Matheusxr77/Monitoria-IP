# Alfabeto original
alfabeto = 'abcdefghijklmnopqrstuvwxyz'

# Recebe a permutação inversa como entrada
permut_inv = input()

# Recebe a frase como entrada
frase = input()

# Loop para cada caractere na frase
for x in frase:
    # Encontra a posição do caractere na permutação inversa e substitui pelo caractere correspondente no alfabeto original
    print(alfabeto[permut_inv.find(x)], end="")

# Imprime uma quebra de linha no final
print()