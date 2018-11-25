'''
Crie um script em python que faça a entradas de 3 valores:

- Data
- Temperatura minima
- Temperatura máxima
Armazene estes valore em arquivo CSV, cada valor vai ocupar uma coluna e o arquivo deve ser atualizado a cada execução do script (3,0)
'''

import csv # para manipular arquivos csv

'''
Atualização do script para capturar a data atual da inserção dos dados
from datetime import datetime # para extrair a data atual
now = (datetime.now() ) # data e hora atual
now = str(now.day) + '-' + str(now.month) + '-' + str(now.year) # fomatado para o csv
'''

# abrir o arquivo
csvFile = open('temperaturas.csv', 'a')
# cria um objeto writer atribuido a uma variavel
temp = csv.writer(csvFile)

data = input("Insira a dia da medição: ")
data = data + "-" + input("Insira a mês da medição: ")
data = data + "-" + input("Insira a ano da medição: ")

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
