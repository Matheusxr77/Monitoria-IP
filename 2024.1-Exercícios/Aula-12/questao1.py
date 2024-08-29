""" Imaginemos que você é um topógrafo encarregado de calcular a altura de um prédio. Para isso, você possui um teodolito, um instrumento que permite medir ângulos verticais. Você posiciona o teodolito a uma distância conhecida do prédio e mede o ângulo de elevação até o topo do prédio. Com base nesses dados, você deve calcular a altura do prédio.
Escreva um programa em Python que receba como entrada a distância do teodolito ao prédio e o ângulo de elevação até o topo do prédio. O programa deve calcular e exibir a altura do prédio. """

import math

# Entrada de dados
distancia = float(input("Digite a distância do teodolito ao prédio: "))
angulo = float(input("Digite o ângulo de elevação até o topo do prédio: "))
angulo = math.radians(angulo)

# Cálculo da altura do prédio
altura = distancia * math.tan(angulo)

# Exibição do resultado
print(f"A altura do prédio é de {altura:.2f} metros.")