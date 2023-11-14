"""Escreva uma função que recebe como parâmetro uma lista L contendo apenas valores numéricos inteiros e maiores que 
zero. A função deverá retornar outra lista contendo todos os valores de L reordenados de forma que inicialmente 
contenha todos os valores ímpares (em ordem crescente) e em seguida todos os valores pares (em ordem decrescente)."""

def ordenar_lista(L):
    # Filtra os números ímpares e os ordena em ordem crescente
    impares = sorted([n for n in L if n % 2 != 0])

    # Filtra os números pares e os ordena em ordem decrescente
    pares = sorted([n for n in L if n % 2 == 0], reverse=True)

    # Concatena as listas ordenadas de ímpares e pares
    return impares + pares

# Solicita ao usuário o tamanho da lista
tamanho = int(input("Digite o tamanho da lista: "))

# Inicializa a lista vazia
lista = []

# Solicita ao usuário os valores da lista
for i in range(tamanho):
    n = int(input(f"Digite o {i+1}º valor da lista: "))
    lista.append(n)

# Chama a função ordenar_lista com a lista fornecida e imprime o resultado
resultado = ordenar_lista(lista)
print(resultado)