# ler as quatro notas do aluno
N1, N2, N3, N4 = map(float, input().split())

# calcular a média ponderada das notas
media = (N1*2 + N2*3 + N3*4 + N4*1)/10

# mostrar a média 
print("Media:", format(media, ".1f"))

# verificar se o aluno foi aprovado, reprovado ou está em exame
if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")

    # ler a nota do exame
    nota_exame = float(input())
    print("Nota do exame:", format(nota_exame, ".1f"))

    # calcular a nova média considerando o exame
    media_final = (media + nota_exame)/2
    
    # verificar se o aluno foi aprovado ou reprovado após o exame 
    if media_final >= 5.0:
        print("Aluno aprovado.")
    else: 
        print("Aluno reprovado.")
    
    print("Media final:", format(media_final, ".1f"))