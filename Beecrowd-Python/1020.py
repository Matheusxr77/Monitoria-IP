# ler o valor inteiro correspondente à idade em dias
idade_dias = int(input())

# calcular os anos, meses e dias
anos = idade_dias // 365
idade_dias = idade_dias % 365

meses = idade_dias // 30
dias = idade_dias % 30

# mostrar o resultado 
print(anos, "ano(s)")
print(meses, "mes(es)")
print(dias, "dia(s)")