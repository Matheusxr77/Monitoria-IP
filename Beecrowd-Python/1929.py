# Recebe os valores dos lados A, B, C e D
A, B, C, D = map(int, input().split())

# Verifica se é possível formar um quadrilátero com os lados dados
if A < B + C and B < A + C and C < A + B:
    print('S')  # Se a condição for atendida, imprime 'S' (sim)
elif A < B + D and B < A + D and D < A + B:
    print('S')  # Se a condição for atendida, imprime 'S' (sim)
elif A < C + D and C < A + D and D < A + C:
    print('S')  # Se a condição for atendida, imprime 'S' (sim)
elif B < C + D and C < B + D and D < B + C:
    print('S')  # Se a condição for atendida, imprime 'S' (sim)
else:
    print('N')  # Se nenhuma condição for atendida, imprime 'N' (não)