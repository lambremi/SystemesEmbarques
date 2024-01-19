from pylab import *
from string import *
import math

#---------------# OUVERTURE DU FICHIER TEST_BATCH #---------------#
overlays_file = open("../fpga/bare_metal/cnn_riscv_mancini/src/overlays.c", "r")

overlays_values = overlays_file.read()

print("Nombre d'element : ", len(overlays_values))

i=0
nbr_virgule = 1

while (i < len(overlays_values)):
    if (overlays_values[i] == ","):
        # print("alerte", i)
        nbr_virgule = nbr_virgule + 1
    i = i+1

print("Nombre de virgules = " , nbr_virgule)

print("Nombres d'element par etiquette = ", (nbr_virgule / 12))

"""
k=170
while (k < 220) :
    print((nbr_virgule / 12) /k , k)
    k = k + 1*"""

print("Nombres d'element par etiquette par ligne de 176 elements : ", (nbr_virgule / 12) / 176)

optimizedtab = array([[[0 for _ in range(176)]for _ in range(80)]for _ in range(12)])
rangetab = []

i=34
word = ''
while (i < len(overlays_values)):
    if (overlays_values[i] != ","):
        if (overlays_values[i] != "}"):
            word = word + overlays_values[i]
        else :
            num=int(word)
            rangetab.append(num)
    else :
        num=int(word)
        rangetab.append(num)
        word = ''
    i = i+1


print("Len rangetab = ", len(rangetab))
print(rangetab[-1])


a=0
b=0
c=0
i=0
while(a<12):
    while(b<80):
        while(c<176):
            #print(i)
            optimizedtab[a][b][c] = rangetab[i]
            c = c + 1
            i = i + 1
        b = b + 1
        c = 0
    a = a + 1
    b = 0

print(rangetab[9690])

print(optimizedtab[0][55])

