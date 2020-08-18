#impa entre 0 e 100
cn = 1
cm = 100
for cn in range(cm):
    if (cn % 2) == 1: #troque o == 1 por == 0 para por o par como verdadeiro
        print(f"[{cn}] Esse numero é ímpa.")
    else:
        print(f"[{cn}] Esse numero é par.")