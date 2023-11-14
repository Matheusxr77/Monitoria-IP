"""16°| Mostre o X ano que teve mais avaliações com um intervalo entre X e Y
Objetivo: olhar qual ano entre esse intervalo teve mais avaliações."""

# Função para remover as aspas de uma string
def retira_aspa(entrada):
    return entrada[1:-1]

# Recebendo os anos para apresentar o intervalo
anoX = int(input("Digite o ano X para o intervalo: "))
anoY = int(input("Digite o ano Y para o intervalo: "))

# Ordenando os anos em ordem crescente
anos_ordenados = sorted([anoX, anoY])

# Atribuindo o menor e o maior ano às variáveis
anoMenor = anos_ordenados[0]
anoMaior = anos_ordenados[1]

# Dicionário vazio para armazenar as avaliações por ano
avaliacoesAno = {}

# Dicionário vazio para armazenar as avaliações filtradas do intervalo especificado
avaliacoesIntervalo = {}

# Abrindo o arquivo que contém as informações dos livros, após a operação concluída, fecha automaticamente
with open("BX_Books.csv", encoding="iso-8859-1") as arqLivros:
    # Pular a primeira linha
    arqLivros.readline()
    # Pesquisar dentro do arquivo que contém as informações dos livros
    for linha in arqLivros:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha.split(";")]
        # Caso o número possa ser convertido para inteiro
        try:
            anoPublicacao = int(entrada[3])
        # Caso não puder ser convertida para um número inteiro
        except ValueError:
            continue
        # Inicializando a contagem de avaliações para o ano de publicação do livro
        if anoPublicacao not in avaliacoesAno:
            avaliacoesAno[anoPublicacao] = 0
        # Incrementando o contador de avaliações para o ano correspondente
        avaliacoesAno[anoPublicacao]

# Abrindo o arquivo que contém as avaliações dos livros, após a operação concluída, fecha automaticamente
with open("BX-Book-Ratings.csv", encoding="iso-8859-1") as arqAvaliacoes:
    # Pular a primeira linha
    arqAvaliacoes.readline()
    # Pesquisar dentro do arquivo que contém as informações dos livros
    for linha in arqAvaliacoes:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha.split(";")]
        # Obtendo o ano da avaliação e o ISBN do livro avaliado
        anoAvaliacao = int(entrada[2])
        ISBN = entrada[1]
        # Verificando se o ano da avaliação está dentro do intervalo especificado pelo usuário e se o livro avaliado está no arquivo de informações dos livros
        if anoMenor <= anoAvaliacao <= anoMaior and ISBN in avaliacoesAno:
            # Adicionando a avaliação ao contador de avaliações do ano correspondente
            avaliacoesAno[ISBN] += 1


# Filtrando as avaliações por ano dentro do intervalo especificado
for ano, avaliacoes in avaliacoesAno.items():
    # Verifica se o ano está dentro do intervalo especificado pelo usuário
    if anoMenor <= ano <= anoMaior:
        # Adiciona a chave-valor ao dicionário que armazenará as avaliações filtradas
        avaliacoesIntervalo[ano] = avaliacoes

# Encontrando o ano com mais avaliações dentro do intervalo
maiorIntervalo = max(avaliacoesIntervalo, key=avaliacoesIntervalo.get)



# Imprimindo o resultado
print(f"Ano com mais avaliações dentro do intervalo {anoMenor}-{anoMaior} é: {maiorIntervalo}")
print(f"Número de avaliações em {maiorIntervalo}: {avaliacoesIntervalo[maiorIntervalo]}")