#include "top_cnn_mancini.h"
#include "convolution.h"
#include "coeffs_double.h"
#include "maxpool.h"
#include "reshape.h"
#include "perceptron.h"
#include "softmax.h"
#include "maxIndice.h"

void top_cnn_mancini(led_type cifar_class[1], image_type image_in[SIZE_IMAGE_1*3], image_type cifar_probabilities[NCAN_OUT_5]){
    image_type Matrice1[24*24*64];
    image_type Matrice2[12*12*64];
    


    convolution(MATRICE_CONV1_WEIGHTS,MATRICE_CONV1_BIASES,image_in,Matrice1,NCAN_IN_1,NCAN_OUT_1,3,SIZE_IMAGE_1);
        
    maxpool(Matrice1,Matrice2,NCAN_OUT_1,SIZE_IMAGE_1,SIZE_IMAGE_2);
    
    convolution(MATRICE_CONV2_WEIGHTS,MATRICE_CONV2_BIASES,Matrice2,Matrice1,NCAN_IN_2,NCAN_OUT_2,3,SIZE_IMAGE_2);
    
    maxpool(Matrice1,Matrice2,NCAN_OUT_2,SIZE_IMAGE_2,SIZE_IMAGE_3);
    
    convolution(MATRICE_CONV3_WEIGHTS,MATRICE_CONV3_BIASES,Matrice2,Matrice1,NCAN_IN_3,NCAN_OUT_3,3,SIZE_IMAGE_3);
    
    maxpool(Matrice1,Matrice2,NCAN_OUT_3,SIZE_IMAGE_3,SIZE_IMAGE_4);
    
    reshape(Matrice2,Matrice1,NCAN_IN_4,SIZE_IMAGE_4);
    
    perceptron(Matrice1,MATRICE_LOCAL3_WEIGHTS,MATRICE_LOCAL3_BIAS,Matrice2,NCAN_IN_5,NCAN_OUT_5);

    softmax(Matrice2,cifar_probabilities,NCAN_OUT_5);

    *cifar_class = maxIndice(cifar_probabilities,NCAN_OUT_5);

}
