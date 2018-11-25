'''
Crie um script python que leia um arquivo CSV gerado acima e extraia as seguintes informações e formato de graficos usando a biblioteca: matplotlib (4,0)

- grafico de linhas da amplitude termica dia a dia
- grafico de linha das com eixo para maiores temperaturas e eixo para as menores temperaturas dia a dia
Faça a media de temperaturas dos dias e agrupe os valores na seguinte distribuição, criando um grafico de pizza
- 0 a 15,99
- 16 a 19,99
- 20,00 a 25,99
- 26 a 29,99
- 30 a 35,99
- 36 a 40,99
- Acima de 41
'''
import os
import csv
import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(0, 100, 3)


csvFile = open('temperaturas.csv', 'r')
# cria um objeto reader atribuido a uma variavel
tempDia = csv.reader(csvFile)

amplitude = []
datas = []
maiores = []
menores = []
medias = [0,0,0,0,0,0,0] # contador por categoria
catMedias = [   '0 a 15,99', '16 a 19,99',
                '20,00 a 25,99', '26 a 29,99',
                '30 a 35,99', '36 a 40,99', 'Acima de 41']

for row in tempDia:
    maiores.append(float(row[2]) )
    menores.append(float(row[1]) )
    amplitude.append(float(row[2]) - float(row[1]))
    datas.append(row[0])

    media = (float(row[1]) + float(row[2]) ) / 2

    if media < 16:
        medias[0] = medias[0] + 1
    elif media >= 16 and media < 20:
        medias[1] = medias[1] + 1
    elif media >= 20 and media < 26:
        medias[2] = medias[2] + 1
    elif media >= 26 and media < 30:
        medias[3] = medias[3] + 1
    elif media >= 30 and media < 36:
        medias[4] = medias[4] + 1
    elif media >= 36 and media < 41:
        medias[5] = medias[5] + 1
    else :
        medias[6] = medias[6] + 1

def amplGraf():
        plt.figure(figsize=(20,10))
        plt.plot(datas, amplitude)
        plt.ylabel('Amplitude')
        plt.xlabel('dias')
        plt.xticks(datas,rotation=28)
        plt.title('Amplitude térmica')
        plt.show()

def maxMinGraf():
        plt.figure(figsize=(20,10))
        plt.plot(datas, menores, maiores)
        plt.ylabel('Maxima e Minima')
        plt.xlabel('dias')
        plt.xticks(datas,rotation=28)
        plt.legend(['Minimas', 'Maximas'], loc=1)
        plt.title('Temperaturas')
        plt.show()

def mediaGraf():
        fig1, ax1 = plt.subplots(figsize=(20,10))
        ax1.pie(medias, autopct='%1.1f%%', startangle=90)
        # Equal aspect ratio ensures that pie is drawn as a circle
        plt.legend()
        plt.title('Media Temperaturas Diarias')
        ax1.legend(loc=3, labels= catMedias)
        ax1.axis('equal')
        plt.tight_layout()
        plt.show()

while True:
    c=int(input("Escolha um grafico: \n 1- Grafico de linhas da amplitude termica dia a dia \
    \n 2- Grafico de linhas com maiores e menores temperaturas dia a dia \
    \n 3- Grafico de pizza com a média das temperaturas. \
    \n 4- Sair\n"))
    if c==1:
        amplGraf()
    if c==2:
        maxMinGraf()
    if c==3:
        mediaGraf()
    if c==4:
        quit()
    else:
        print ("opção inexistente")
        os.system("cls")
