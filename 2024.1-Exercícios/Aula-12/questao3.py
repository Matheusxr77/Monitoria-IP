""" As cadeias de DNA são compostas por nucleotídeos, que são as unidades básicas do DNA. Existem quatro tipos de nucleotídeos, identificados pelas letras A, T, C e G:
● Adenina (A)
● Timina (T)
● Citosina (C)
● Guanina (G)
Uma cadeia de DNA pode ser representada como uma string em que cada caractere corresponde a um nucleotídeo. Por exemplo, a sequência de DNA "ATCG" indica que a primeira posição é Adenina, a segunda é Timina, a terceira é Citosina e a quarta é Guanina. O DNA é formado por duas cadeias complementares que se emparelham através de ligações de hidrogênio entre nucleotídeos específicos:
● Adenina (A) sempre emparelha com Timina (T)
● Citosina (C) sempre emparelha com Guanina (G)
Essas duas cadeias são antiparalelas, o que significa que elas correm em direções opostas. A sequência em uma cadeia determina a sequência complementar na outra. Por exemplo, se uma cadeia é "ATCG", a cadeia complementar será "TAGC". O reverso complementar é a sequência complementar lida na direção oposta. Isso é importante em muitos contextos biológicos e bioinformáticos, como na replicação do DNA e na transcrição de DNA para RNA.
Escreva um programa em Python que leia uma sequência de DNA e encontre o seu reverso complementar. O reverso complementar é formado substituindo cada nucleotídeo pelo seu complementar (A ↔ T, C ↔ G) e, em seguida, invertendo a sequência. """

# Entrada de dados
dna = input("Digite a sequência de DNA: ")

# Inicialização da sequência complementar
complementar = ""

# Cálculo da sequência complementar
for nucleotideo in dna:
    if nucleotideo == "A":
        complementar += "T"
    elif nucleotideo == "T":
        complementar += "A"
    elif nucleotideo == "C":
        complementar += "G"
    elif nucleotideo == "G":
        complementar += "C"
    
# Inicialização do reverso complementar
reverso_complementar = ""

# Cálculo do reverso complementar
for i in range(len(complementar) - 1, -1, -1):
    reverso_complementar += complementar[i]

# Exibição do resultado
print(f"O reverso complementar da sequência de DNA é {reverso_complementar}.")