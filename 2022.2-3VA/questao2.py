"""Fiona sempre amou poesia, e recentemente descobriu uma forma poética fascinante. Tautogramas são um caso especial 
de aliteração, que é a ocorrência da mesma letra no início de palavras adjacentes. Em particular, uma sentença é um 
tautograma se todas suas palavras começam com a mesma letra.
Por exemplo, as seguintes sentenças são tautogramas:
- Flowers Flourish From France
- Sam Simmonds speaks softly
- Peter pickED pePPers
- ruly tautograms triumph
Fiona quer deslumbrar seu namorado com uma carta romântica repleta desse tipo de sentenças, usando a Linguagem 
Python, ajude Fiona a verificar se cada sentença que ela escreveu é um tautograma ou não."""

def verifica_tautograma(sentenca):
    sentenca = sentenca.lower()

    palavras = sentenca.split()

    primeira_letra = palavras[0][0]

    for palavra in palavras:
        if palavra[0] != primeira_letra:
            return False
    
    return True

sentenca = input("Digite uma sentença: ")

if verifica_tautograma(sentenca):
    print("É um tautograma!")
else:
    print("Não é um tautograma!")