#Questão 8

num1=str(input("Digite um numero inteiro menor que 1000: \n"))
tam_num1 = len(num1)

if tam_num1 == 3:
    print("{} = {} centenas, {} dezenas e {} unidades".format(num1, num1[0], num1[1], num1[2]))

