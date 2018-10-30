km = float(input('Insira a distancia a ser percorrida em km: '))
consumoMedio = float(input('Insira o consumo médio do veiculo: '))

def consumo (km, consumoMedio):
    consumoTotal = consumoMedio / km
    return consumoTotal

print (consumo(km, consumoMedio))
