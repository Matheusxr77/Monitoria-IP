# Função para remover as aspas de uma string
def retiraspa(entrada):
    return entrada[1:-1]

# Função para fazer a média
def media(entrada):
    return entrada[0] / entrada[1]

# Recebe o ano do livro
ano = int(input("Digite o ano: "))
livros = {}

# Leitura do arquivo "BX_Books.csv"
arqLivros = open("BX_Books.csv", encoding="iso-8859-1")
arqLivros.readline()  # Ignora a primeira linha (cabeçalho)

# Preenche o dicionário 'livros' com informações dos livros do ano fornecido
for linha in arqLivros:
    entrada = [retiraspa(x) for x in linha.split(";")]
    try:
        if int(entrada[3]) == ano:
            livros[entrada[0]] = [0, 0, entrada[1]]
    except:
        continue

arqLivros.close()

# Leitura do arquivo "BX-Book-Ratings.csv"
arqNotas = open("BX-Book-Ratings.csv", encoding="iso-8859-1")
arqNotas.readline()  # Ignora a primeira linha (cabeçalho)

# Atualiza o dicionário 'livros' com a soma das avaliações e a contagem de avaliações para cada livro
for linha in arqNotas:
    entrada = [retiraspa(x) for x in linha[:-1].split(";")]
    if entrada[1] in livros:
        livros[entrada[1]][0] += int(entrada[2])  # Soma das avaliações
        livros[entrada[1]][1] += 1  # Contagem de avaliações

arqNotas.close()

# Obtém as médias das avaliações e encontra o livro com a maior média
medias = sorted([x[0] for x in livros.values()])
maiorMedia = medias[-1]

# Filtra os livros com mais de 2 avaliações e com a maior média
melhores = [x for x in livros.values() if x[1] > 2 and x[0] == maiorMedia]

# Imprime os livros com as melhores médias
for livro in melhores:
    print(livro[2], media(livro), livro[1])

# Imprime o dicionário 'livros' (comentado para evitar uma saída muito longa)
print(livros)