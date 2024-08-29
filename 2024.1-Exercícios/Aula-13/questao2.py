""" Crie uma solução recursiva potencia_rec(base, expoente) e uma solução iterativa potencia_ite(base, expoente) para o seguinte problema: execução de uma operação de potenciação; ou seja, cálculo do valor da base elevado ao expoente. """

# Função recursiva
def potencia_rec(base, expoente):
    if expoente == 0:
        return 1
    return base * potencia_rec(base, expoente - 1)

# Função iterativa
def potencia_ite(base, expoente):
    potencia = 1
    for i in range(expoente):
        potencia *= base
    return potencia

# Solicita que o usuário insira a base e o expoente
base = int(input("Digite a base: "))
expoente = int(input("Digite o expoente: "))

# Calcula a potência usando a função recursiva
resultado_rec = potencia_rec(base, expoente)
print(f"{base} elevado a {expoente} (recursivo): {resultado_rec}")

# Calcula a potência usando a função iterativa
resultado_ite = potencia_ite(base, expoente)
print(f"{base} elevado a {expoente} (iterativo): {resultado_ite}")