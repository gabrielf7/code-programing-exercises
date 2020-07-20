#atv em aula
print('='*70)
print(" " * 29, "Cadastro-Já")
print('='*70)
print('|'*70)
nome = str(input(".......""[Obrigatório] Digite seu nome: "))
max = 3
while len(str(nome)) <= max:
        print('!' * 70)
        print("[Alerta: Nome inválido. Digite um nome com no mínimo três caracteres.]")
        print('!' * 70)
        nome = str(input(".......""[Obrigatório] Digite seu nome: "))
if len(str(nome)) > max:
    snome = str(input(".......""[Obrigatório] Digite seu sobrenome: "))
    idade = int(input(".......""[Obrigatório] Digite sua Idade: "))
    while int(idade < 0) or int(idade > 150):
        print('!' * 70)
        print(" " * 20, "[Alerta: Idade inválida.]")
        print('!' * 70)
        idade = int(input(".......""[Obrigatório] Digite sua Idade: "))
    if int(idade > 0) or int(idade < 150):
        salario = float(input(".......""[Obrigatório] Digite sua Salário: R$ "))
        while salario == 0 or salario < 0:
            print('!' * 70)
            print(" " * 20, "[Alerta: Salário inválido.]")
            print('!' * 70)
            salario = float(input(".......""[Obrigatório] Digite sua Salário: R$ "))
        if salario > 0:
            senha = str(input(".......""[Obrigatório] Digite sua senha: "))
            while senha == nome or senha == snome or senha == nome + snome:
                print('!' * 70)
                print("[Alerta: Senha Inválida. A Senha não pode ser idêntica ao nome, sobronome ou os dois juntos.]")
                print('!' * 70)
                senha = str(input(".......""[Obrigatório] Digite sua senha: "))
            if senha != nome or senha != snome or senha != nome + snome:
                print('='*70)
                print(" " * 29, "Questionário")
                print('='*70)
                print("[P1] Digite sua Orientação Sexual:\n[m] Masculino, [f] Feminino, [o] Outros.")
                print("OBS: Escolha apenas a letra está entre colchetes.")
                sexo = str(input("[Obrigatório] Sua escolha: "))
                if sexo == str('m') or sexo == str('M'):
                    sexo = 'Masculino.'
                elif sexo == str('f') or sexo == str('F'):
                    sexo = 'Feminina.'
                elif sexo == str('o') or sexo == str('O'):
                    sexo = 'Outros.'
                while False:
                    if sexo != str('m') or sexo != str('f') or sexo != str('o') or sexo != str('M') or sexo != str('F') or sexo != str('O'):
                        print('!' * 70)
                        print("[Alerta: Sexo Inválido.]")
                        print('!' * 70)
                        sexo = str(input("[Obrigatório] Sua Escolha: "))
                        if sexo == str('m') or sexo == str('M'):
                            sexo = 'Masculino.'
                        elif sexo == str('f') or sexo == str('F'):
                            sexo = 'Feminina.'
                        elif sexo == str('o') or sexo == str('O'):
                            sexo = 'Outros.'
                print("[P2] Digite seu Estado Civil:\n[s] Solteiro, [c] Casado, [v] Viúvo, [d] Divorciado.")
                print("OBS: Escolha apenas a letra está entre colchetes.")
                ECivil = str(input("[Obrigatório] Sua escolha: "))
                if ECivil == str('s') or ECivil == str('S'):
                    ECivil = "Solteiro."
                elif ECivil == str('c') or ECivil == str('C'):
                    ECivil = "Casado."
                elif ECivil == str('v') or ECivil == str('V'):
                    ECivil = "Viúvo."
                elif ECivil == str('d') or ECivil == str('D'):
                    ECivil = "Dirvociado."
                while False:
                      if ECivil != str('s') or ECivil != str('c') or ECivil != str('v') or ECivil != str('d') or ECivil != str('S') or ECivil != str('C') or ECivil != str('V') or ECivil != str('D'):
                        print('!' * 70)
                        print(" " * 20, "[Alerta: Estado Civil Inválido.]")
                        print('!' * 70)
                        ECivil = str(input("[Obrigatório] Escolha seu Estado Civl: "))
                        if ECivil == str('s') or ECivil == str('S'):
                            ECivil = "Solteiro."
                        elif ECivil == str('c') or ECivil == str('C'):
                            ECivil = "Casado."
                        elif ECivil == str('v') or ECivil == str('V'):
                            ECivil = "Viúvo."
                        elif ECivil == str('d') or ECivil == str('D'):
                            ECivil = "Dirvociado."
                print('|'*70)
                print('#' * 70)
                print(" " * 25, "Resultado do Cadastro")
                print(" " * 1, " - ", " " * 58, " - ")
                print(" " * 12,"[Nome]:............",nome)
                print(" " * 12,"[Sobrenome]:.......",snome)
                print(" " * 12,"[Idade]:...........", idade, "anos")
                print(" " * 12,"[Salário]:......... R$",salario)
                print(" " * 12,"[Senha]:...........",senha)
                print(" " * 12,"[Sexo]:............",sexo)
                print(" " * 12,"[Estado Civil]:....",ECivil)
                print(" " * 1," - ", " " * 58," - ")
                print('#' * 70)
                print('/' * 70)
                print(" " * 18, "Cadastro encerrado com sucesso...")
                print('/' * 70)