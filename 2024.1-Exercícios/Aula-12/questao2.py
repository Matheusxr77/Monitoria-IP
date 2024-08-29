""" Implemente o jogo da adivinhação. Neste jogo, um número é sorteado e o usuário tenta adivinhar esse número por meio de uma sequência de palpites, ao passo que vai recebendo feedbacks indicando se o número alvo é "maior" ou "menor" que o último palpite dado. Para sortear um número inteiro, podemos usar a função randint do módulo random. """

import random

# Sorteio do número alvo
numero_alvo = random.randint(1, 100)

# Inicialização do palpite
palpite = 0

# Loop principal
while palpite != numero_alvo:
    palpite = int(input("Digite um palpite: "))
    if palpite < numero_alvo:
        print("O número alvo é maior.")
    elif palpite > numero_alvo:
        print("O número alvo é menor.")
    else:
        print("Parabéns! Você acertou o número alvo.")
        break