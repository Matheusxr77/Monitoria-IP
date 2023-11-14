"""9°| Dado dois livros X e Y, mostre qual deles tem a pior avaliação média
Objetivo: receber os livros, fazer a média de cada um e mostrar aquele que tem a menor entre os dois."""

# Função para remover as aspas de uma string
def retira_aspa(entrada):
    return entrada[1:-1]

# Função para calcular a média de uma lista de números
def media(entrada):
    return sum(entrada)/len(entrada)

# Recebendo o título dos livros
livroX = str(input("Digite o título do livro X: "))
livroY = str(input("Digite o título do livro Y: "))

# Armazenando em dicionários vazios os dados de cada livro
dadosLivroX = {}
dadosLivroY = {}

# Abrindo o arquivo que contém as informações dos livros, após a operação concluída, fecha automaticamente
with open("BX_Books.csv", encoding="iso-8859-1") as arqLivros:
    # Pular a primeira linha
    arqLivros.readline()
    # Pesquisa dentro do arquivo que contém as informações dos livros
    for linha in arqLivros:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha.split(";")]
        # Armazena os dados do livro X no dicionário dadosLivroX
        if entrada[1] == livroX:
            dadosLivroX[entrada[0]] = [0, 0, entrada[1]]
        # Armazena os dados do livro Y no dicionário dadosLivroY
        elif entrada[1] == livroY:
            dadosLivroY[entrada[0]] = [0, 0, entrada[1]]

# Verificação de existência dos livros na base de dados
# Verifica se o livro X existe
if not dadosLivroX:
    print(f"O livro: {livroX}, não existe no arquivo!")
    exit()
# Verifica se o livro Y existe
if not dadosLivroY:
    print(f"O livro: {livroY}, não existe no arquivo!")
    exit()

# Abrindo o arquivo que contém as notas das avaliações dos livros, após a operação concluída, fecha automaticamente
with open("BX-Book-Ratings.csv", encoding="iso-8859-1") as arqAvaliacoes:
    # Pular a primeira linha
    arqAvaliacoes.readline()
    # Pesquisa dentro do arquivo que contém as notas das avaliações dos livros
    for linha in arqAvaliacoes:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha[:-1].split(";")]
        if entrada[1] in dadosLivroX:
            # Atualiza a soma das avaliações do livro X
            dadosLivroX[entrada[1]][0] += int(entrada[2])
            # Incrementa o contador de avaliações do livro X
            dadosLivroX[entrada[1]][1] += 1
        elif entrada[1] in dadosLivroY:
            # Atualiza a soma das avaliações do livro Y
            dadosLivroY[entrada[1]][0] += int(entrada[2])
            # Incrementa o contador de avaliações do livro Y
            dadosLivroY[entrada[1]][1] += 1

# Calculando a média das avaliações dos Livros
avaliacaoLivroX = [x[0]/x[1] for x in dadosLivroX.values() if x[1] > 2]
avaliacaoLivroY = [y[0]/y[1] for y in dadosLivroY.values() if y[1] > 2]

# Verificando se há livros encontrados antes de tentar obter a média
# Verificação do livro X
if avaliacaoLivroX:
    mediaX = media(avaliacaoLivroX)
else:
    mediaX = 0
# Verificação do Livro Y
if avaliacaoLivroY:
    mediaY = media(avaliacaoLivroY)
else:
    mediaY = 0

# Declarando a pior avaliação média de cada livro
piorMediaX = [x for x in dadosLivroX.values() if x[1] > 0 and x[0]/x[1] == min(avaliacaoLivroX, default=0)]
piorMediaY = [y for y in dadosLivroY.values() if y[1] > 0 and y[0]/y[1] == min(avaliacaoLivroY, default=0)]

# Armazenando o título do livro com a pior avaliação média
if mediaX < mediaY:
    # Armazena o título do livro com pior avaliação média do livro X
    if len(piorMediaX) > 0:
        piorLivro = piorMediaX[0][2]
    else:
        piorLivro = "O livro X não tem avaliações!"
elif mediaY < mediaX:
    # Armazena o título do livro com pior avaliação média do livro Y
    if len(piorMediaY) > 0:
        piorLivro = piorMediaY[0][2]
    else:
        piorLivro = "O livro Y não tem avaliações!"
# Caso ambos os livros tenham a mesma avaliação média
else:
    piorLivro = "Os dois livros têm a mesma avaliação média"

# Apresentando qual livro tem a pior avaliação média
print(f"O livro com a pior avaliação média entre '{livroX}' e '{livroY}', é: {piorLivro}")