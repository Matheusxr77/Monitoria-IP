""" Escreva um programa em Python que leia um número de telefone celular e o valide de acordo com as seguintes regras:
1. Números de telefone podem ser fornecidos com ou sem código de área.
2. O código de área (DDD) deve ser um número de dois ou três dígitos.
3. O número pode ter 7 ou 8 dígitos. Se o número de telefone (sem o DDD) tiver 7 dígitos, adicionar o '9' na frente.
4. Se o número de telefone já tiver 8 dígitos, deixá-lo como está.
5. O número pode incluir ou não traços separadores.
6. Se for um número válido, formate-o seguindo a estrutura (DDD) 9XXXX-XXXX ou (DDD) XXXX-XXXX. Caso contrário, imprima a mensagem “número inválido”. """

import re

def validar_numero_telefone(telefone):
    # Remove caracteres não numéricos
    telefone = re.sub(r'\D', '', telefone)

    # Verifica o comprimento total do número
    if len(telefone) < 8:
        return "número inválido"
    
    # Se o número tiver 7 dígitos, adiciona o '9'
    if len(telefone) == 7:
        telefone = '9' + telefone

    # Verifica se o telefone tem 11 dígitos (incluindo o código de área)
    if len(telefone) not in [10, 11]:
        return "número inválido"
    
    # Se o telefone tiver 11 dígitos, assume que o DDD está presente
    if len(telefone) == 11:
        ddd = telefone[:2]
        numero = telefone[2:]
    else:
        ddd = ""
        numero = telefone

    # Verifica o DDD
    if ddd and not (10 <= int(ddd) <= 99):
        return "número inválido"
    
    # Verifica o número
    if len(numero) not in [8, 9]:
        return "número inválido"
    
    # Formata o número
    if len(numero) == 8:
        numero_formatado = f"{numero[:4]}-{numero[4:]}"
    else:
        numero_formatado = f"{numero[:5]}-{numero[5:]}"
    
    if ddd:
        return f"({ddd}) {numero_formatado}"
    else:
        return numero_formatado

# Exemplo de uso
telefone = input("Digite o número de telefone: ")
print(validar_numero_telefone(telefone))