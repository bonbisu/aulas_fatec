frase = 'Venderam frutas no supermecado'

frase = frase.split(' ')

wordlist = open('./assets/wordlist-big-20171225.txt', 'r')
print(wordlist.read())
# print(wordlist.readline())
for word in frase:
    print(word)
