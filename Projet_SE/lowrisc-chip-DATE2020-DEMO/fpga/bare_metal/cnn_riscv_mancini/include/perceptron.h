#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include "types.h"
#define coordPerceptron(i,k) (i + channelOut*k)

void perceptron(image_type* vecteur, coef_type* weights, coef_type* biais, image_type* output, const int channelIn, const int channelOut);

#endif // PERCEPTRON_H