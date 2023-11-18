# Recebe as entradas como texto
entradaX = input()
entradaY = input()

# Inicializa listas vazias blocoX e blocoY
blocoX = []
blocoY = []

# Extende as listas com os caracteres das entradas
blocoX.extend(entradaX)
blocoY.extend(entradaY)

# Verifica se os caracteres nas posições pares das listas são diferentes
if (blocoX[0] != blocoY[0] and blocoX[2] != blocoY[2] and blocoX[4] != blocoY[4] and blocoX[6] != blocoY[6] and blocoX[8] != blocoY[8]):
    print("Y")  # Se pelo menos um par de caracteres for diferente, imprime "Y"
else:
    print("N")  # Caso contrário, imprime "N"