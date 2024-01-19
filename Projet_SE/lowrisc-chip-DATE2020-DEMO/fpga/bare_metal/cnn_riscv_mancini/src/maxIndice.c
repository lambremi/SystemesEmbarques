#include "maxIndice.h"

int maxIndice(image_type* matrice,const int size) {
    double maxValue = 0;
    int indice = 0;
    
    for (int i = 0; i < size; i++) {
        if (maxValue < matrice[i]) {
            maxValue = matrice[i];
            indice = i;
        }
    }
    
    return indice;
}