# Loop para cada arquivo de teste
while True:
    try:
        nomes = []
        
        # Lê os 10 nomes
        for _ in range(10):
            nome = input()
            nomes.append(nome)
        
        # Imprime o terceiro, sétimo e nono nomes
        print(nomes[2])
        print(nomes[6])
        print(nomes[8])
    
    except EOFError:
        break