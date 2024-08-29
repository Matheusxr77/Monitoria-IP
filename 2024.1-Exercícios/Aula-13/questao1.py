""" Crie uma solução recursiva soma_naturais_rec(n) e uma solução iterativa soma_naturais_ite(n) para o seguinte problema: soma de todos os números naturais de 1 até n. """

# Função recursiva
def soma_naturais_rec(n):
    if n == 1:
        return 1
    return n + soma_naturais_rec(n - 1)

# Função iterativa
def soma_naturais_ite(n):
    soma = 0
    for i in range(1, n + 1):
        soma += i
    return soma

# Solicita que o usuário insira o valor de n
n = int(input("Digite um número natural: "))

# Calcula a soma usando a função recursiva
resultado_rec = soma_naturais_rec(n)
print(f"Soma recursiva de 1 até {n}: {resultado_rec}")

# Calcula a soma usando a função iterativa
resultado_ite = soma_naturais_ite(n)
print(f"Soma iterativa de 1 até {n}: {resultado_ite}")