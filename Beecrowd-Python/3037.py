#calcular pontuacao
def calcular_pontuacao(pontuacao, distancia):
    return pontuacao * distancia

#calcular pontuacao total 
def calcular_pontuacao_total(arremessos):
    pontuacao_total = 0
    for pontuacao, distancia in arremessos:
        pontuacao_total += calcular_pontuacao(pontuacao, distancia)
    return pontuacao_total

#determinar o vencedor 
def determinar_vencedor(joao, maria):
    pontuacao_total_joao = calcular_pontuacao_total(joao)
    pontuacao_total_maria = calcular_pontuacao_total(maria)
    
    if pontuacao_total_joao > pontuacao_total_maria:
        return "JOAO"
    elif pontuacao_total_joao < pontuacao_total_maria:
        return "MARIA"
    else:
        return "EMPATE"
    
#main
def main():
    n = int(input())
    
    for _ in range(n):
        joao = []
        maria = []
        
        for _ in range(3):
            pontuacao, distancia = map(float, input().split())
            joao.append((pontuacao, distancia))
        
        for _ in range(3):
            pontuacao, distancia = map(float, input().split())
            maria.append((pontuacao, distancia))
            
        vencedor = determinar_vencedor(joao, maria)
        print(vencedor)
    
if __name__ == "__main__":
    main()