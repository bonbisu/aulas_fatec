km = float(input('Insira a distancia a ser percorrida em km: '))
consumoMedio = float(input('Insira o consumo médio do veiculo: '))

def consumo (km, consumoMedio):
    consumoTotal =  km / consumoMedio
    return consumoTotal

print (consumo(km, consumoMedio))
