# Recebe o número de casos de teste (N)
N = int(input())

# Recebe as dimensões da caixa (altura, largura, profundidade)
altura, largura, profundidade = map(int, input().split())

# Verifica se o cubo pode caber na caixa
if N <= altura and N <= largura and N <= profundidade:
    print('S')  # Se verdadeiro, imprime 'S' (Sim)
else:
    print('N')  # Caso contrário, imprime 'N' (Não)