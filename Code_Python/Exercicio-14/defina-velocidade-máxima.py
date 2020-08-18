print("@Programa capaz de multar o motorista que ultrapassa a velocidade permitida@\n"
      "Situação:\n"
      "\tA velocidade máxima permitida na Avenida Leão Dourado é de 80km/h\n")
print(" " * 10, "--Insira os dados para serem analisados--")
QuantidadeDePessoas = int(input("Informe a quantidade de pessoas a serem avaliadas:\n_"))
contador = 0
pagar = 0
limite = str()
while contador < QuantidadeDePessoas:
    print("-" * 20)
    PlacaDoCarro = int(input("Informe a placa do carro:_"))
    while PlacaDoCarro <= 0:
        print("Erro")
        PlacaDoCarro = int(input("Informe a placa do carro:_"))
    VelocidadeDoCarro = float(input("Informe a velocidade do carro:_"))
    while VelocidadeDoCarro <= 0:
        print("Erro")
        VelocidadeDoCarro = int(input("Informe a placa do carro:_"))
    print("-" * 20)
    if VelocidadeDoCarro > 80:
        pagar = (VelocidadeDoCarro - 80) * 5
        if pagar >= 190:
            limite = str("Limite de multa foi atingida. Terá a carteira invalidada.")
    if VelocidadeDoCarro <= 80:
        print(f"Placa do carro: {PlacaDoCarro}\nA velocidade do carro: Está andando na linha, a velocidade está abaixo de 80km/h.")
    if VelocidadeDoCarro > 80 and pagar < 190:
        print(f"Placa do carro: {PlacaDoCarro}\nA velocidade do carro: {VelocidadeDoCarro}\nO Valor à pagar: R$ {pagar:.2f}")
    if VelocidadeDoCarro > 80 and pagar >= 190:
        print(f"Placa do carro: {PlacaDoCarro}\nA velocidade do carro: {VelocidadeDoCarro}\n{limite}")
    contador += 1