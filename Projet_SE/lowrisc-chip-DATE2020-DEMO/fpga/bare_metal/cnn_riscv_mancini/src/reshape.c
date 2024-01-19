#include "reshape.h"


void reshape(image_type* matrice_in, image_type* vecteur_out,const int channelIn,const int sizeImageIn){
    int k = 0;
    CHANNELS:for (int c = 0; c < channelIn; c++){
        Y:for (int y = 0; y < sizeImageIn; y++){
            X:for (int x = 0; x < sizeImageIn; x++){
                vecteur_out[k] = matrice_in[coord(x,y,c)];
                k++;
            }
        }
    }
}
