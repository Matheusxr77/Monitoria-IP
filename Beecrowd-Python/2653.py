# Inicializa uma lista vazia chamada 'joias'
joias = []

# Loop infinito para receber as joias como entrada
while True:
    try:
        joias.append(input())
        
    # Captura a exceção EOFError para encerrar o loop quando ocorrer o fim do arquivo (EOF)
    except EOFError:
        break

# Converte a lista 'joias' em um conjunto para remover duplicatas
joias = set(joias)

# Imprime o número total de joias únicas
print(len(joias))