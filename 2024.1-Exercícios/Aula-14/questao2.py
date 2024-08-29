"""Escreva um programa em Python que leia o arquivo alunos.txt (criado na questão anterior) e permita ao usuário buscar informações de um aluno pelo nome. 
O programa deve exibir o nome, a idade e a nota do aluno, caso o aluno seja encontrado no arquivo. Se o nome do aluno não for encontrado, o programa deve exibir uma mensagem informando que o aluno não foi encontrado.
Requisitos:
● O programa deve solicitar ao usuário o nome do aluno a ser pesquisado.
● Se o aluno for encontrado, o programa deve exibir todas as informações relacionadas a ele (nome, idade, nota).
● Caso o nome não seja encontrado no arquivo, exiba a mensagem: "Aluno não encontrado."."""

nome = input("Digite o nome do aluno a ser pesquisado: ")
with open("alunos.txt", "r") as file:
    alunos = file.read().split("---\n")
    for aluno in alunos:
        if nome in aluno:
            print(aluno)
            break
    else:
        print("Aluno não encontrado.")