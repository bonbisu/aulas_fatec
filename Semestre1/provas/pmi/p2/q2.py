'''
Crie um script em python que faça a entradas de 3 valores:

- Data
- Temperatura minima
- Temperatura máxima
Armazene estes valore em arquivo CSV, cada valor vai ocupar uma coluna e o arquivo deve ser atualizado a cada execução do script (3,0)
'''

import csv # para manipular arquivos csv
import os

# abrir o arquivo
csvFile = open('temperaturas.csv', 'a')
# cria um objeto writer atribuido a uma variavel
temp = csv.writer(csvFile)
dia = 0
mes = 0
ano = 0

# verificando a validade da data
while (dia > 31) or (dia < 1):
    dia = int(input("Insira a dia da medição: "))
    if (dia > 31) or (dia < 1):
        print('Valor para DIA incorreto. ex: 01 ')
        os.system("cls")

while (mes > 12) or (mes < 1):
    mes = int(input("Insira a mês da medição: "))
    if (mes > 12) or (mes < 1):
        print('Valor para MES incorreto. ex: 11')
        os.system("cls")

while len(str(ano)) != 4:
    ano = int(input("Insira a ano da medição: "))
    if len(str(ano)) != 4:
        print('Valor para ANO incorreto. ex: 2018')
        os.system("cls")

data = str(dia).zfill(2) + '-' + str(mes).zfill(2) + '-' + str(ano) # zfill completa com zeros a esquerda quando necessário
min = float(input('Insira a temperatura minima : '))
max = float(input('Insira a temperatura maxima : '))

# verificar se valores foram inseridos corretamente
if min > max:
    t = min
    min = max
    max = t

# gravar no csv
temp.writerow([data, min, max])
# fechar arquivo
csvFile.close()
