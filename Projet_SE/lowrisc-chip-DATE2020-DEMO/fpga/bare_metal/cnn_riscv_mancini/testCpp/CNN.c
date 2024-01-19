// #include <fstream>
// #include <iostream>
// #include <iomanip>
// #include <stdio.h>
// #include <stdlib.h>

// #include "imagesMem.h"
// #include "top_cnn_mancini.h"
// #include "types.h"

// using namespace std ;





// void print_matrice(double *image,int lenght){
//      for (int i = 0; i < lenght; i++) {
//         cout << image[i] << endl;
//     }
// }

// int maxIndice(double matrice[]) {
//     double maxValue = 0;
//     int indice = 0;
    
//     for (int i = 0; i < 10; i++) {
//         if (maxValue < matrice[i]) {
//             maxValue = matrice[i];
//             indice = i;
//         }
//     }
    
//     return indice;
// }


// int main() {
//     // Affichage d'un message à la console

    
//     int good = 0;

//     for (int i = 0; i < NB_IMAGES; i++){
        
//         led_type cifar_class;
//         image_type cifar_probabilities[NCAN_OUT_5];
//         image_type imageIn[24*24*3];
//         for(int y = 0; y<24*24*3; y++){
//             imageIn[y] = images_matrice[i*24*24*3+y];
//         }
//         top_cnn_mancini(&cifar_class,imageIn,cifar_probabilities);

//         cout << index_matrice[i] <<"   "<< cifar_class << "    ";
//         if(index_matrice[i]==cifar_class){
//             good++;
//         }
//         cout << (((double)good/(i+1))*100) << endl;
//     }

//     // Retourne 0 pour indiquer une exécution réussie
//     return 0;
// }

#include "imagesMem.h"
#include "top_cnn_mancini.h"
#include "types.h"
#include <stdio.h>

int main() {
    // Affichage d'un message à la console

    
    int good = 0;

    for (int i = 0; i < NB_IMAGES; i++){
        
        led_type cifar_class;
        image_type cifar_probabilities[NCAN_OUT_5];
        image_type imageIn[24*24*3];
        for(int y = 0; y<24*24*3; y++){
            imageIn[y] = images_matrice[i*24*24*3+y];
        }
        top_cnn_mancini(&cifar_class,imageIn,cifar_probabilities);

        printf("%lf  %d   %lf\n",index_matrice[i],cifar_class,(double)good/i);
        if(index_matrice[i]==cifar_class){
            good++;
        }
    }

    // Retourne 0 pour indiquer une exécution réussie
    return 0;
}
