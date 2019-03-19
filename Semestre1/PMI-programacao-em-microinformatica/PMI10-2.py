'''
Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no semestre, 
calcule a media das notas e o percentual de faltas sobre 20 aulas.
Caso o percentual de faltas for maior que 30% o aluno esta automaticamente reprovado, 
caso ao contrario verifique se a media e maior igual a 6,  se afirmativo o aluno esta aprovado, 
senão informe uma nota P3 para recalcular a media, se a nova media for maior igual a 6, 
escreva aprovado no exame, caso negativo exiba reprovado por nota.
'''
# importar função para trabalhar com csv
import csv
# iniciar notas com 0 caso o aluno tenha sido reprovado por faltas
n1,n2,n3,media = 0,0,0,0

nome = input('Insira o nome do aluno: ')

# abrir o arquivo
csvFile = open('boletim.csv', 'a')
# cria um objeto writer atribuido a uma variavel
boletim = csv.writer(csvFile) 

# escrever dentro do arquivo a primeira linha
# boletim.writerow(['Nome','Faltas','Frequencia','P1','P2','P3','Media','Status'])

faltas = float(input('Insira a quantidade de faltas do aluno: '))

freq = faltas / 20
f = freq * 100

if freq <= 0.3:
    n1 = float(input('Insira a nota da P1: '))
    n2 = float(input('Insira a nota da P2: '))
    media = (n1 + n2)/2

    if media <= 6:
        n3 = float(input('Aluno não alcançou a média! \nInsira a nota da P3: '))
        if n1 > n2:
            media = (n1 + n3)/2
        else:
            media = (n2 + n3)/2

    if media >= 6:
        print('Aluno aprovado com média %.2f' % media)
        status = 'Aprovado'
    else:
        print('Aluno reprovado com média %.2f' % media)
        status = 'Reprovado abaixo da media'
else:
    print('Aluno reprovado com %.1f%% de faltas' % f) 
    status = 'Reprovado por faltas'

boletim.writerow([nome,faltas,f,n1,n2,n3,media,status])
csvFile.close()
