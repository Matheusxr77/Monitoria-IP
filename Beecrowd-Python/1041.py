# Lê os valores de x e de y
x, y = map(float, input().split())

# Verifica em qual quadrante o ponto se encontra
if x == 0 and y == 0:
    print("Origem")
elif x == 0:
    print("Eixo Y")
elif y == 0:
    print("Eixo X")
elif x > 0 and y > 0:
    print("Q1")
elif x < 0 and y > 0:
    print("Q2")
elif x < 0 and y < 0:
    print("Q3")
else: 
    print("Q4")