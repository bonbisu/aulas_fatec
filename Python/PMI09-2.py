print('Calculadora km para milhas.')
km = float(input('Insira a distancia em km: '))

def conversao (km):
    milhas = km * 1.60934
    return milhas

print('A distancia em milhas é : ', conversao(km))
