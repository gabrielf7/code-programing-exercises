#Questão 13
print('='*70)
print(" " * 29, "Atividade")
print('='*70)
num1 = float(input("Digite o primeiro número: "))
num2 = float(input("Digite o segundo número: "))
Adição = str('a')
Subtração = str('s')
Divisão = str('d')
Multiplicação = str('m')
print("Qual operação deseja realizar: \n[a] Adição. | [s] Subtração. | [d] Divisão. | [m] Multiplicação.")
print("OBS: Escolha uma operação referente a letra que esteja no colchete '[]'.")
esc = str(input("Sua escolha: "))

print('='*70)

if esc == str('a'):
    resultado = num1 + num2
    print(f"Resultado da operação de Adição é: {resultado}")
if esc == str('s'):
    resultado = num1 - num2
    print(f"Resultado da operação de Subtração é: {resultado}")
if esc == str('d'):
    resultado = num1 / num2
    print(f"Resultado da operação de Divisão é: {resultado}")
if esc == str('m'):
    resultado = num1 * num2
    print(f"Resultado da operação de Multiplicação é: {resultado}")

print('='*70)

if esc == str('a') or esc == str('s') or esc == str('d') or esc == str('m'):
    if(resultado % 2) == 0:
      print(f"a) Esse número {resultado} é par. \n")
    else:
      print(f"a) Esse número {resultado} é ímpa. \n")
if esc == str('a') or esc == str('s') or esc == str('d') or esc == str('m'):
    if resultado < 0:
      print(f"b) Esse número {resultado} é negativo. \n")
    else:
      print(f"b) Esse número {resultado} é positivo. \n")
if esc == str('a') or esc == str('s') or esc == str('d') or esc == str('m'):
    if(resultado//1) == resultado:
      print(f"c) Esse número {resultado} é inteiro. \n")
    else:
      print(f"c) Esse número {resultado} é decimal. \n")

print('='*70)
print(" " * 24, "Atividade Finalizada")
print('='*70)