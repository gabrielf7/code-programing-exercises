#atv em aula
print('='*70)
print(" " * 29, "Cadastro-Já")
print('='*70)
print('|'*70)
nome = str(input(".......""[Obrigatório] Digite seu nome: "))
snome = str(input(".......""[Obrigatório] Digite seu sobrenome: "))
senha = str(input(".......""[Obrigatório] Digite sua senha: "))
print('|'*70)
while True:
    if (senha == nome) or (senha == snome):
       print('!' * 70)
       print(" " * 20, "[Alerta: Senha Inválida]")
       senha = str(input(".......""[Obrigatório] Digite sua senha: "))
       print('!' * 70)
    elif(senha != nome) or (senha != snome):
        print('/' * 70)
        print(" " * 18, "Cadastro encerrado com sucesso...")
        print('/'*70)
        exit()

print('|'*70)