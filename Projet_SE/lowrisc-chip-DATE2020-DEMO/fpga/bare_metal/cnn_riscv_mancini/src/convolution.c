#include "convolution.h"


void convolution(coef_type* coeffs, coef_type* biais, image_type* image_in, image_type* image_out, int size_in_chan, int size_out_chan, int size_Coeff, int size_image){


    for (int C = 0; C < size_out_chan; C++) {
        for (int I = 0; I < size_image; I++) {
            for (int J = 0; J < size_image; J++) {
                image_type sum = 0;
                for (int M = 0; M < size_Coeff; M++) {
                    for (int N = 0; N < size_Coeff; N++) {
                        for (int L = 0; L < size_in_chan; L++) {
                            int X = J + N - ((size_Coeff-1)/2);
                            int Y = I + M - ((size_Coeff-1)/2);
                            if (X >= 0 && X < size_image && Y >= 0 && Y < size_image) {
                                image_type _image = +  image_in[ X*(size_image*size_in_chan) + 
                                            Y*size_in_chan + 
                                            L] ;
                                            
                                image_type _coeffs =coeffs[     N*(size_Coeff*size_in_chan*size_out_chan)
                                            + M*(size_in_chan*size_out_chan) 
                                            + L*(size_out_chan) 
                                            + C];
                                sum += _image * _coeffs;
                            }
                        }
                    }
                }
                image_out[  J*(size_image*size_out_chan)
                                    + I*(size_out_chan)
                                    + C]
                            = (sum + biais[C]) > 0 ? (sum + biais[C]) : 0;
            }
        }
    }
}