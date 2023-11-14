# Lê o valor inteiro N
N = int(input())

# Loop para iterar pelos valores pares de 1 até N e imprimir seus quadrados
for i in range(2, N+1, 2):
    quadrado = i ** 2
    print("{}^2 = {}".format(i, quadrado))