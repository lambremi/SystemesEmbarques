from pylab import *
from string import *
import math

#---------------# OUVERTURE DU FICHIER TEST_BATCH #---------------#
overlays_file = open("../../fpga/bare_metal/cnn_riscv_mancini/src/overlays.c", "r")
overlays_values = overlays_file.read()
print(overlays_values)
