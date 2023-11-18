# Define a função 'codigo' que mapeia caracteres para números
def codigo(x):
    if x in 'GQaku': 
        return 0
    if x in 'ISblv': 
        return 1
    if x in 'EOYcmw': 
        return 2
    if x in 'FPZdnx': 
        return 3
    if x in 'JTeoy': 
        return 4
    if x in 'DNXfpz': 
        return 5
    if x in 'AKUgq': 
        return 6
    if x in 'CMWhr': 
        return 7
    if x in 'BLVis': 
        return 8
    if x in 'HRjt': 
        return 9

# Recebe o número de senhas (N)
N = int(input())

# Loop para cada senha
for i in range(N):
    # Recebe a senha como texto e remove espaços
    senha = str(input()).replace(' ', '')
    cripto = ''  # Inicializa uma string vazia para armazenar a versão criptografada da senha
    # Loop para cada caractere na senha
    for j in senha:
        # Adiciona o número correspondente ao caractere à string cripto
        cripto += str(codigo(j))
    # Imprime os primeiros 12 caracteres da senha criptografada
    print(cripto[:12])