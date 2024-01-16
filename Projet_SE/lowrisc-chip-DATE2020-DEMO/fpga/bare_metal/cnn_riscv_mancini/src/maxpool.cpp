#include "maxpool.h"



using namespace std;

void maxpool(image_type* matrice_in, image_type* matrice_out,const int channel,const int sizeImageIn,const int sizeImageOut){
    CHANNELS:for (int c = 0; c < channel; c++){
        Y:for (int y = 0; y < sizeImageOut; y++){
            X:for (int x = 0; x < sizeImageOut; x++){
                image_type max = 0;
                LOCAL_X:for (int i = 0; i < MAXPOOL_MP_SIZE; i++){
                    LOCAL_Y:for (int j = 0; j < MAXPOOL_MP_SIZE; j++){
                        if(MAXPOOL_STRIDE*x+i<sizeImageIn && MAXPOOL_STRIDE*y+j<sizeImageIn){
                            if (matrice_in[coord_in((MAXPOOL_STRIDE*x+i),(MAXPOOL_STRIDE*y+j),c)] > max){
                                max = matrice_in[coord_in((MAXPOOL_STRIDE*x+i),(MAXPOOL_STRIDE*y+j),c)];
                            }
                        }
                    }
                }
                matrice_out[coord_out(x,y,c)] = max;
            }
        }
    }
}
