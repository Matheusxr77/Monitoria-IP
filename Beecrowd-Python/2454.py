# Recebe os valores de P e R
P, R = input().split()

# Verifica as condições e imprime o resultado correspondente
if P == '0':
    print('C')  # Se P for '0', imprime 'C'
elif R == '0':
    print('B')  # Se R for '0', imprime 'B'
else:
    print('A')  # Se nenhuma das condições acima for atendida, imprime 'A'