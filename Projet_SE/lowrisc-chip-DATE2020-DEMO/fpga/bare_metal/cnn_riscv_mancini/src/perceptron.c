#include "perceptron.h"

void perceptron(image_type* vecteur, coef_type* weights, coef_type* biais, image_type* output, const int channelIn, const int channelOut)
{
    image_type sum;
    for (int i = 0; i < channelOut; i++)
    {
        sum = 0;
        for (int k = 0; k < channelIn; k++)
        {
            sum += vecteur[k] * weights[coordPerceptron(i,k)];
        }
        sum += biais[i];
        output[i] = sum;
    }
}
