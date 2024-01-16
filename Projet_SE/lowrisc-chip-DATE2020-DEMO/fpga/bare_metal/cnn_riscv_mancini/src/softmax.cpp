#include <cmath>
#include <iostream>
#include "softmax.h"

void softmax(image_type* vector_in, image_type* vector_out,const int sizeVector) {
    double sum = 0;
    for (int i = 0; i < sizeVector; i++) {
        sum += exp(vector_in[i]);
    }
    for (int i = 0; i < sizeVector; i++) {
        vector_out[i] = exp(vector_in[i]) / sum;
    }
}
