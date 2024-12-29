base=input("Vamos converter para outras bases \nQual você deseja entre 'binaria', 'octal', 'hexadecimal' ou 'Todas' ao mesmo tempos? ")
nub=int(input("Digite um número a ser convertido "))
base=base.casefold()

if base=="binaria" : print("a conversão para base 2 fica: {:b}".format(nub)) 
elif base=="octal": print(f"a conversão para base 8 fica: {nub:o}")
elif base=="hexadecimal":print(f"a conversão para base 16 fica: {nub:x}")
elif base=="todas": print(f"Para Base 2 fica: {nub:b} \nPara Base 8: {nub:o} \nPara Base 16: {nub:x}")