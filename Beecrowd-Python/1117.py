# Contador de notas válidas
notas_validas = 0  
# Acumulador para calcular a média
media = 0  

# Loop continua até obter duas notas válidas
while notas_validas < 2:
    # Recebe a nota como um número de ponto flutuante
    nota = float(input())  

    # Verifica se a nota está no intervalo permitido
    if nota >= 0 and nota <= 10:
        # Incrementa o contador de notas válidas
        notas_validas += 1
        # Adiciona a nota ao acumulador  
        media += nota  
    else:
        # Exibe mensagem se a nota for inválida
        print("nota invalida")  

# Calcula e imprime a média das notas válidas
print(f"media = {media/2:.2f}")