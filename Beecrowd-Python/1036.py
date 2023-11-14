# ler os três valores de ponto flutuante A, B e C
A, B, C = map(float, input().split())

# calcular o discriminante
delta = B**2 - 4 * A * C

# verificar se é possível calcular as raízes
if delta<0 or A==0:
    print("Impossivel calcular")
else:
    # calcula as raízes
    r1 = (-B + delta**0.5)/(2*A)
    r2 = (-B - delta**0.5)/(2*A)

    # mostrar os resultado com 5 dígitos após o ponto 
    print("R1 =", format(r1, ".5f"))
    print("R2 =", format(r2, ".5f"))