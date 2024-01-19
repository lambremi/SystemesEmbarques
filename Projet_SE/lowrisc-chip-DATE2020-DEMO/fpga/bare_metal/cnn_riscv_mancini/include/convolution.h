#ifndef CONVOLUTION_H
#define CONVOLUTION_H

#include "types.h"


void convolution(coef_type* coeffs, coef_type* biais, image_type* image_in, image_type* image_out, int size_in_chan, int size_out_chan, int size_Coeff, int size_image);

#endif