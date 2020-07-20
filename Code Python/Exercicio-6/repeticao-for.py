#aula 24-09-2019
print('='*50)
print(" " * 19, "Atividade")
print('='*50)
nalunos = float(input("Digite o numero de alunos da turma: "))
print('='*50)
cont = 1
total = 0
while cont <= nalunos:
    nota = float(input(f"@ Digite a nota {cont}: "))
    total = float(total + nota)
    cont = cont + 1
print('='*50)
media = total/nalunos
print(' ' * 11, f"A media da turma eh: {media}")
print('='*50)