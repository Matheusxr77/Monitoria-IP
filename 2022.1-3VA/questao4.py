"""4°| Faça em python, implemente um algoritmo que gere uma lista de tamanho n (onde esse n será fornecido pelo usuário) 
preenchida com os números da sequência de fibonacci."""
 
def fibonacci(n):
    # Inicializa a lista com os dois primeiros termos da sequência de Fibonacci
    lista = [0, 1]

    # Gera a sequência adicionando os termos seguintes à lista
    for i in range(2, n):
        lista.append(lista[i-1] + lista[i-2])

    # Retorna a lista gerada
    return lista

# Solicita ao usuário o tamanho desejado da lista de Fibonacci
n = int(input("Digite o tamanho da lista de Fibonacci: "))

# Chama a função fibonacci com o tamanho fornecido e imprime o resultado
print(fibonacci(n))