#ifndef MAXPOOL_H
#define MAXPOOL_H

#include "types.h"

#define coord_in(x,y,c) (x*sizeImageIn*channel + y*channel + c)
#define coord_out(x,y,c) (x*sizeImageOut*channel + y*channel + c)
void maxpool(image_type* matrice_in, image_type* matrice_out,const int channel,const int sizeImageIn,const int sizeImageOut);

#endif // MAXPOOL_H