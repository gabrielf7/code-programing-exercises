#desafio
#atividade de 19/09/2019
print("*******************************************************************************************")
print("                             Sistema de Caixa Eletronico")

print("*******************************************************************************************")
sb = int(input("|-- Digite o seu saldo bancário: "))
vs = int(input("|-- Digite o valor do Saque:  "))
print("*******************************************************************************************")
print("                                    Resultado Final")
print("|-- Valor do saldo bancário: ", sb)
print("|-- Valor do Saque: ", vs)
if (vs>sb):
    print("[Alerta: Não foi possível prosseguir, o Saque não pode ser superior ao saldo bancário.]")
if (vs<2):
    print("[Alerta: O valor mínimo para saques é de R$ 2,00]")
if vs>1084:
    print("[Alerta: O limite do caixa excedeu]")
else:
    if(vs > 100): #Parte do código para saques acima de 100 reais
       n100 = vs // 100
       if(n100 > 5): #saldo novo é maior que 100 reais
           df = n100 - 5
           n100 = 5
           resto100 = vs%100
           novoS = df*100+resto100
           if novoS >= 50:#saldo novo é maior = 50 reais
               n50 = novoS // 50
               if n50 > 8:
                   df = n50 - 8
                   n50 = 8
                   resto50 = novoS % 50
                   novoS = df*50+resto50
                   if novoS >= 20:#saldo novo é maior = 20 reais
                       n20 = novoS // 20
                       if n20 >= 3:
                           df = n20 - 3
                           n20 = 3
                           resto20 = novoS % 20
                           novoS = df*20+resto20
                           novoSSTR = str(novoS)
                           ultimo = novoSSTR[1]
                           print(ultimo)
                           n10 = novoS // 10
                           novoS = novoS % 10
                           if n10 <= 5:
                               if ultimo == 1 or ultimo == 3:
                                   n10 = n10 - 1
                                   print("|-- Total de cédulas de R$ 100,0:", n100)
                                   print("|-- Total de cédulas de R$ 50,0:", n50)
                                   print("|-- Total de cédulas de R$ 20,0:", n20)
                                   print("|-- Total de cédulas de R$ 10,0:", n10)
                               else:
                                   n10 = novoS%10
                                   print("|-- Total de cédulas de R$ 100,0:", n100)
                                   print("|-- Total de cédulas de R$ 50,0:", n50)
                                   print("|-- Total de cédulas de R$ 20,0:", n20)
                                   print("|-- Total de cédulas de R$ 10,0:", n10)
                           else:
                               df = n10 -5
                               n10 = 5
                               novoS = novoS + df*10
                               print("|-- Total de cédulas de R$ 100,0:", n100)
                               print("|-- Total de cédulas de R$ 50,0:", n50)
                               print("|-- Total de cédulas de R$ 20,0:", n20)
                               print("|-- Total de cédulas de R$ 10,0:", n10)
                               novoSSTR = str(novoS)
                               ultimo = novoS[1]
                               if ultimo == 1 or ultimo == 3:
                                   n5 = n5 - 1
                                   novoS = novoS % 5+5
                                   print("|-- Total de cédulas de R$ 100,0:", n100)
                                   print("|-- Total de cédulas de R$ 50,0:", n50)
                                   print("|-- Total de cédulas de R$ 20,0:", n20)
                                   print("|-- Total de cédulas de R$ 10,0:", n10)
                                   print("|-- Total de cédulas de R$ 5,0:", n5)
                               else:
                                   novoS = novoS % 5
                                   print("|-- Total de cédulas de R$ 100,0:", n100)
                                   print("|-- Total de cédulas de R$ 50,0:", n50)
                                   print("|-- Total de cédulas de R$ 20,0:", n20)
                                   print("|-- Total de cédulas de R$ 10,0:", n10)
                                   print("|-- Total de cédulas de R$ 5,0:", n5)
                                   novoSSTR = str(novoS)
                                   ultimo = novoS[1]
                                   if ultimo == 1 or ultimo == 3:
                                       n2 = n2 - 1
                                       novoS = novoS % 2 + 2
                                       print("|-- Total de cédulas de R$ 100,0:", n100)
                                       print("|-- Total de cédulas de R$ 50,0:", n50)
                                       print("|-- Total de cédulas de R$ 20,0:", n20)
                                       print("|-- Total de cédulas de R$ 10,0:", n10)
                                       print("|-- Total de cédulas de R$ 5,0:", n5)
                                       print("|-- Total de cédulas de R$ 2,0:", n2)
                                   else:
                                       novoS = novoS % 2
                                       print("|-- Total de cédulas de R$ 100,0:", n100)
                                       print("|-- Total de cédulas de R$ 50,0:", n50)
                                       print("|-- Total de cédulas de R$ 20,0:", n20)
                                       print("|-- Total de cédulas de R$ 10,0:", n10)
                                       print("|-- Total de cédulas de R$ 5,0:", n5)
                                       print("|-- Total de cédulas de R$ 2,0:", n2)

                       else: #saldo novo é menor que 20 reais
                           novoS = novoS%20
                           print("|-- Total de cédulas de R$ 100,0:", n100)
                           print("|-- Total de cédulas de R$ 50,0:", n50)
                           print("|-- Total de cédulas de R$ 20,0:", n20)

               else: #menos ou = a 8 notas de 50
                   novoS = novoS%50
                   print("|-- Total de cédulas de R$ 100,0:", n100)
                   print("|-- Total de cédulas de R$ 50,0:", n50)

       else:
           novoS = vs%100
           print("|-- Total de cédulas de R$ 100,0:", n100)
    else: #Parte do código inferiores de que 100 reais
        print("")

print("********************************************************************************************")