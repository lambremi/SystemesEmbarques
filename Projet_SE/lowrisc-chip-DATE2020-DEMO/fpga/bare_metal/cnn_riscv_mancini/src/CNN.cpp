#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std ;


void read_image_from_bin(const char *file_name, int index, double *image, int *indexFind) {
    // Ouvrir le fichier binaire en mode lecture
    FILE *file = fopen(file_name, "rb");
    if (file == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        exit(EXIT_FAILURE);
    }

    // Calculer le décalage vers le début de l'image souhaitée
    long offset = index * 3073 + 1;

    // Se déplacer vers le début de l'image souhaitée
    fseek(file, offset, SEEK_SET);

    // Lire les données de l'image en tant que tableau d'octets
    unsigned char *image_data = (unsigned char *)malloc(32 * 32 * 3);
    fread(image_data, 1, 32 * 32 * 3, file);

    // Trouver le type
    offset = index * 3073;
    fseek(file, offset, SEEK_SET);
    *indexFind = fgetc(file);

    // Convertir le tableau d'octets en tableau numpy
    // for (int i = 4; i < 28; i++) {
    //     for (int j = 4; j < 28; j++) {
    //         for (int c = 0; c < 3; c++) {
    //             image[(i-4)*24*3+(j-4)*3+c] = (double)image_data[i * 32 * 3 + j * 3 + c];
    //         }
    //     }
    // }
    int count = 0;
    for (int c = 0; c < 3; c++){
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j < 32; j++) {
                if(i>=4 && i<28 && j>=4 && j<28){
                    image[(i-4) * 24 * 3 + (j-4) * 3 + c] = (double)image_data[count];
                }
                count++;
            }
        }
    }

    // Fermer le fichier
    fclose(file);
    free(image_data);
}

void print_matrice(double *image,int lenght){
     for (int i = 0; i < lenght; i++) {
        cout << image[i] << endl;
    }
}


int main() {
    // Affichage d'un message à la console
    printf("Hello, world!\n");

    double image[24*24*3];
    int index = 0;

    read_image_from_bin("../../cnn_data/test_batch.bin",0,image,&index);
    print_matrice(image,24*24*3);

    // Retourne 0 pour indiquer une exécution réussie
    return 0;
}