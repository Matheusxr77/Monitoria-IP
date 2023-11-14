"""Implemente uma função recursiva em Linguagem Python que calcula a quantidade de vezes que o caractere X ocorre
em uma string."""

def contar_caractere(string, caractere):
    if not string:
        return 0
    
    elif string[0] == caractere:
        return 1 + contar_caractere(string[1:], caractere)
    
    else:
        return contar_caractere(string[1:], caractere)
    
texto = input("Digite o texto: ")

caractere_procurado = input("Digite o caractere procurado: ")

resultado = contar_caractere(texto, caractere_procurado)
print(f'O caractere "{caractere_procurado}" ocorre {resultado} vezes na string')