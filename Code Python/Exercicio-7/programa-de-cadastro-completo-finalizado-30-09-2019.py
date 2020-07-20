#atv em aula
print('='*70)
print(" " * 29, "Cadastro-Já")
print('='*70)
print('|'*70)
nome = str(input(".......""[Obrigatório] Digite seu nome: "))
max = 3
while len(str(nome)) <= max:
        print('!' * 70)
        print("[Alerta: Nome inválido. \n Digite um nome com no mínimo três caracteres.]")
        print('!' * 70)
        nome = str(input(".......""[Obrigatório] Digite seu nome: "))
if len(str(nome)) > max:
    snome = str(input(".......""[Obrigatório] Digite seu sobrenome: "))
    idade = int(input(".......""[Obrigatório] Digite sua Idade: "))
    while int(idade <= 0) or int(idade > 150):
        print('!' * 70)
        print(" " * 20, "[Alerta: Idade inválida.]")
        print('!' * 70)
        idade = int(input(".......""[Obrigatório] Digite sua Idade: "))
    if int(idade > 0) or int(idade < 150):
        salario = float(input(".......""[Obrigatório] Digite seu Salário: R$ "))
        while salario <= 0:
            print('!' * 70)
            print(" " * 20, "[Alerta: Salário inválido.]")
            print('!' * 70)
            salario = float(input(".......""[Obrigatório] Digite seu Salário: R$ "))
        if salario > 0:
            senha = str(input(".......""[Obrigatório] Digite sua senha: "))
            while senha == nome or senha == snome or senha == nome + snome:
                print('!' * 70)
                print("[Alerta: Senha inválida. \n A senha não pode conter o nome, sobrenome ou os dois juntos.]")
                print('!' * 70)
                senha = str(input(".......""[Obrigatório] Digite sua senha: "))
            if senha != nome or senha != snome or senha != nome + snome:
                print('='*70)
                print(" " * 29, "Questionário")
                print('='*70)
                print("[P1] Digite sua Orientação Sexual:\n [m] Masculino, [f] Feminino ou [o] Outros.")
                print("OBS: Escolha apenas a letra está entre colchetes.")
                sexo = str(input("[Obrigatório] Sua escolha: "))
                if sexo == str('m') or sexo == str('M'):
                    s = str('Masculino.')
                elif sexo == str('f') or sexo == str('F'):
                    s = str('Feminino.')
                elif sexo == str('o') or sexo == str('O'):
                    s = str('Outros.')
                else:
                    while True:
                        if sexo != str('m') or sexo != str('f') or sexo != str('o') or sexo != str('M') or sexo != str('F') or sexo != str('O'):
                            print('!' * 70)
                            print(" " * 20, "[Alerta: Sexo Inválido.]")
                            print('!' * 70)
                            sexo = str(input("[Obrigatório] Sua Escolha: "))
                            if sexo == str('m') or sexo == str('M'):
                                s = ('Masculino.')
                            elif sexo == str('f') or sexo == str('F'):
                                s = str('Feminino.')
                            elif sexo == str('o') or sexo == str('O'):
                                s = str('Outros.')
                        break
                if sexo == str('m') or sexo == str('f') or sexo == str('o') or sexo == str('M') or sexo == str('F') or sexo == str('O'):
                    print("[P2] Digite seu Estado Civil:\n [s] Solteiro, [c] Casado, [v] Viúvo, [d] Divorciado.")
                    print("OBS: Escolha apenas a letra está entre colchetes.")
                    ECivil = str(input("[Obrigatório] Sua escolha: "))
                    if ECivil == str('s') or ECivil == str('S'):
                        EC = str("Solteiro.")
                    elif ECivil == str('c') or ECivil == str('C'):
                        EC = str("Casado.")
                    elif ECivil == str('v') or ECivil == str('V'):
                        EC = str("Viúvo.")
                    elif ECivil == str('d') or ECivil == str('D'):
                        EC = str("Divorciado.")
                    else:
                        while True:
                            if ECivil != str('s') or ECivil != str('c') or ECivil != str('v') or ECivil != str('d') or ECivil != str('S') or ECivil != str('C') or ECivil != str('V') or ECivil != str('D'):
                                print('!' * 70)
                                print(" " * 17, "[Alerta: Estado Civil Inválido.]")
                                print('!' * 70)
                                ECivil = str(input("[Obrigatório] Sua escolha: "))
                                if ECivil == str('s') or ECivil == str('S'):
                                    EC = str("Solteiro.")
                                elif ECivil == str('c') or ECivil == str('C'):
                                    EC = str("Casado.")
                                elif ECivil == str('v') or ECivil == str('V'):
                                    EC = str("Viúvo.")
                                elif ECivil == str('d') or ECivil == str('D'):
                                    EC = str("Divorciado.")
                            break
                    if ECivil == str('s') or ECivil == str('c') or ECivil == str('v') or ECivil == str('d') or ECivil == str('S') or ECivil == str('C') or ECivil == str('V') or ECivil == str('D'):
                        print('|'*70)
                        print('#' * 70)
                        print(" " * 25, "Resultado do Cadastro")
                        print(" " * 1, " - ", " " * 58, " - ")
                        print(" " * 12,"[Nome]:............",nome)
                        print(" " * 12,"[Sobrenome]:.......",snome)
                        print(" " * 12,"[Idade]:...........", idade, "anos")
                        print(" " * 12,"[Salário]:......... R$",salario)
                        print(" " * 12,"[Senha]:...........",senha)
                        print(" " * 12,"[Sexo]:............",s)
                        print(" " * 12,"[Estado Civil]:....",EC)
                        print(" " * 1," - ", " " * 58," - ")
                        print('#' * 70)
                        print('/' * 70)
                        print(" " * 18, "Cadastro encerrado com sucesso...")
                        print('/' * 70)