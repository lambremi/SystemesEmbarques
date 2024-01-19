#ifndef RESHAPE_H
#define RESHAPE_H

#include "types.h"

#define coord(x,y,c) (x + sizeImageIn*y + sizeImageIn*sizeImageIn*c)

void reshape(image_type* matrice_in, image_type* vecteur_out,const int channelIn,const int sizeImageIn);

#endif