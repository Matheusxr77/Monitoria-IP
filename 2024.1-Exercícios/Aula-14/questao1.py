""" Escreva um programa em Python que solicite ao usuário informações de N alunos, onde N é um número informado pelo próprio usuário. Para cada aluno, o programa deve pedir o nome, a idade e a nota final. As informações devem ser salvas em um arquivo chamado alunos.txt, com o seguinte formato:
Nome: <nome>
Idade: <idade>
Nota: <nota>
---
Cada aluno deve ser separado por uma linha com ---.
Exemplo do arquivo alunos.txt criado:
Nome: Alex
Idade: 21
Nota: 8.5
---
Nome: Bob
Idade: 23
Nota: 7.2
---"""

n = int(input("Digite o número de alunos: "))
with open("alunos.txt", "w") as file:
    for i in range(n):
        nome = input("Digite o nome do aluno: ")
        idade = input("Digite a idade do aluno: ")
        nota = input("Digite a nota do aluno: ")
        file.write(f"Nome: {nome}\nIdade: {idade}\nNota: {nota}\n---\n")

print("Arquivo criado com sucesso!")