#numero entre 0 e 100
con = 0
while (con <= 99):
    con = con + 1
    if (con % 2) == 1: #troque o == 1 por == 0 para por o par como verdadeiro
        print(f"[{con}] Esse numero é ímpa.")
    else:
        print(f"[{con}] Esse numero é par.")