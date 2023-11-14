# Inicializa contadores
pares = 0
impares = 0
positivos = 0
negativos = 0

# Lê os 5 valores inteiros
for _ in range(5):
    valor = int(input())
    
    # Verifica se é par ou ímpar
    if valor % 2 == 0:
        pares += 1
    else:
        impares += 1
    
    # Verifica se é positivo ou negativo
    if valor > 0:
        positivos += 1
    elif valor < 0:
        negativos += 1

# Imprime os resultados
print("{} valor(es) par(es)".format(pares))
print("{} valor(es) impar(es)".format(impares))
print("{} valor(es) positivo(s)".format(positivos))
print("{} valor(es) negativo(s)".format(negativos))