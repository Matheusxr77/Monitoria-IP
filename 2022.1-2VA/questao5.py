"""5°| Mostre a idade do usuário que melhor avaliou um autor X
Objetivo: obter o(s) usuário(s) que melhor avaliou(avaliaram) determinado autor."""

# Função para remover as aspas de uma string
def retira_aspa(entrada):
    return entrada[1:-1]

# Recebendo o nome do autor
autor = str(input("Digite o nome do autor: "))

# Armazenando os dados do autor a um dicionário vazio
dadosAutor = {}

# Armazenando os dados dos usuários que avaliaram o autor a um dicionário vazio
dadosUsuarios = {}

# Armazenando os dados dos usuários que melhor avaliaram
melhoresUsuarios = []

# Abrindo o arquivo que contém as informações dos autores, após a operação concluída, fecha automaticamente
with open("BX_Books.csv", encoding="iso-8859-1") as arqLivros:
    # Pular a primeira linha
    arqLivros.readline()
    # Pesquisa dentro do arquivo que contém as informações dos autores
    for linha in arqLivros:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha.split(";")]
        # Verificando se o nome do autor da linha atual é igual ao nome pesquisado
        if entrada[2] == autor:
            # Adicionando os dados do autor ao dicionário de dados do autor
            dadosAutor[entrada[0]] = [0, 0, entrada[2]]

# Verificação de existência do autor na base de dados
if not dadosAutor:
    print(f"O autor: {autor}, não existe no arquivo!")
    exit()

# Abrindo o arquivo que contém as notas das avaliações dos livros, após a operação concluída, fecha automaticamente
with open("BX-Book-Ratings.csv", encoding="iso-8859-1") as arqAvaliacoes:
    # Pular a primeira linha
    arqAvaliacoes.readline()
    # Pesquisa dentro do arquivo que contém as notas das avaliações dos livros
    for linha in arqAvaliacoes:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha[:-1].split(";")]
        # Verificando se o ISBN do livro avaliado está no dicionário de dados do autor
        if entrada[1] in dadosAutor:
            # Adicionando a nota e a quantidade de avaliações do usuário ao dicionário de dados do autor
            dadosAutor[entrada[1]][0] += int(entrada[2])
            dadosAutor[entrada[1]][1] += 1
            # Verificando se o usuário que fez a avaliação já está no dicionário de dados dos usuários
            if entrada[0] in dadosUsuarios:
                # Adicionando a nota e a quantidade de avaliações do usuário ao dicionário de dados dos usuários
                dadosUsuarios[entrada[0]][0] += int(entrada[2])
                dadosUsuarios[entrada[0]][1] += 1
            else:
                # Criando um novo item no dicionário de dados dos usuários para o usuário que fez a avaliação
                dadosUsuarios[entrada[0]] = [int(entrada[2]), 1]

# Abrindo o arquivo que contém as informações dos usuários, após a operação concluída, fecha automaticamente
with open("BX-Users.csv", encoding="iso-8859-1") as arqUsuarios:
    # Pular a primeira linha
    arqUsuarios.readline()
    # Pesquisa dentro do arquivo que contém as informações dos usuários
    for linha in arqUsuarios:
        # Removendo as aspas da string e separando os elementos pelo delimitador ";"
        entrada = [retira_aspa(x) for x in linha[:-1].split(";")]
        # Verifica se o usuário está no dicionário de dados dos usuários
        if entrada[0] in dadosUsuarios:
            # Adicionando a idade do usuário ao item correspondente no dicionário de dados dos usuários
            dadosUsuarios[entrada[0]].append(entrada[2])

# Organizando em ordem crescente as avaliações dos usuários para o autor
avaliacoes = sorted([x[0] for x in dadosUsuarios.values()])
maiorMedia = avaliacoes[-1]

# Encontrando a idade dos usuários que melhor avaliaram o autor
for usuario, dados in dadosUsuarios.items():
    # Para cada item, é verificado se a avaliação é igual à maior avaliação armazenada
    if dados[0] == maiorMedia:
        # Caso o número possa ser convertido para inteiro
        try:
            idade = int(dados[2])
        # Caso não puder ser convertida para um número inteiro
        except ValueError:
            idade = 'Idade do usuário não foi informada (NULL)'
        melhoresUsuarios.append((usuario, idade))

# Imprimindo as informações encontradas 
print(f"Autor em questão: {autor}")
print(f"Segue o(s) usuário(s) que melhor avaliaram o autor")
for usuario, idade in melhoresUsuarios:
    print(f"Usuário: {usuario}, Idade: {idade}")