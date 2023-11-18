# Recebe os valores de B e T como entrada
B = int(input())
T = int(input())

# Calcula o resultado da operação
final_do_corte = (B + T) * 35
m = 11200 - final_do_corte

# Compara os valores e imprime o resultado correspondente
if final_do_corte > m:
    print(1)  # Se final_do_corte é maior que m, imprime 1
elif m > final_do_corte:
    print(2)  # Se m é maior que final_do_corte, imprime 2
else:
    print(0)  # Se nenhum dos casos acima for verdadeiro, imprime 0