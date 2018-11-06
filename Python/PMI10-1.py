'''
Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no semestre, 
calcule a media das notas e o percentual de faltas sobre 20 aulas.
Caso o percentual de faltas for maior que 30% o aluno esta automaticamente reprovado, 
caso ao contrario verifique se a media e maior igual a 6,  se afirmativo o aluno esta aprovado, 
senão informe uma nota P3 para recalcular a media, se a nova media for maior igual a 6, 
escreva aprovado no exame, caso negativo exiba reprovado por nota.
'''

nome = input('Insira o nome do aluno: ')
boletim = open('%s.txt' % nome, 'w') 
faltas = float(input('Insira a quantidade de faltas do aluno: '))

freq = faltas / 20
f = freq * 100
boletim.write('Aluno : %s\nNumero de faltas: %d | Frequencia : %.1f' % (nome, faltas, f))

if freq <= 0.3:
    n1 = float(input('Insira a nota da P1: '))
    n2 = float(input('Insira a nota da P2: '))
    media = (n1 + n2)/2
    boletim.write('\nNotas:\nProva 1 : %.2f | Prova 2 : %.2f\nMédia : %.2f' % (n1, n2,media))

    if media <= 6:
        n3 = float(input('Aluno não alcançou a média! \nInsira a nota da P3: '))
        boletim.write('\nAluno não alcançou a média. Precisou fazer a Prova 3.\nProva 3 : %.2f' % n3)
        if n1 > n2:
            media = (n1 + n3)/2
        else:
            media = (n2 + n3)/2

    if media >= 6:
        print('Aluno aprovado com média %.2f' % media)
        boletim.write('\nAluno aprovado com média %.2f' % media)
    else:
        print('Aluno reprovado com média %.2f' % media)
        boletim.write('\nAluno reprovado com média %.2f' % media)
else:
    print('Aluno reprovado com %.1f%% de faltas' % f) 
    boletim.write('\nAluno reprovado com %.1f%% de faltas' % f) 
    boletim.close()
