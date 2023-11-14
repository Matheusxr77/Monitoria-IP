# Lê os valores de A, B e C
A, B, C = map(float, input().split())

# Verifica se os valores formam um triângulo
if A + B > C and A + C > B and B + C > A:
    perimetro = A + B + C
    print("Perimetro =", format(perimetro, ".1f"))
else:
    area = ((A + B) * C) / 2
    print("Area =", format(area, ".1f"))