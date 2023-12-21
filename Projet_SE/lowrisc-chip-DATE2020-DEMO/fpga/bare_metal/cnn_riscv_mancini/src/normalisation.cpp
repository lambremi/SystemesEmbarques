#include "normalisation.h"
#include "math.h"


void CNN_normalisation (image_type* image_in, image_type* image_out,int lentgh){
	double acc;
    double SommeEcratType;
    double moyenne;
    double ecartType;
		
    //accumulate all value
    acc = 0 ;
    for(int i=0;i<lentgh;i++) {
        acc += image_in[i] ;
    }
    moyenne = acc/lentgh;

    SommeEcratType = 0;
    for(int i=0;i<lentgh;i++) {
        SommeEcratType += (moyenne - image_in[i])*(moyenne - image_in[i]);
    }
    ecartType = sqrt(SommeEcratType/(lentgh));
    
    //max

    for(int i=0;i<lentgh;i++) {
        image_out[i] = ((image_in[i]- moyenne) / ecartType);
    }
}

