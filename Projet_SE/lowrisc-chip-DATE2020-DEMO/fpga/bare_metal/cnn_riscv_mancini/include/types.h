#ifndef TYPES_H
#define TYPES_H

// #include <ac_fixed.h>

// ------------------ INPUT SIZES ------------------

#define CNN_IMAGE_WIDTH  24
#define CNN_IMAGE_HEIGHT 24
#define CNN_IMAGE_SIZE   (CNN_IMAGE_WIDTH*CNN_IMAGE_HEIGHT)


#define TAB_SIZE 36864

// ------------------ CONV PARAMETERS ------------------

// Conv 1
#define NCAN_IN_1 3
#define NCAN_OUT_1 64
#define SIZE_IMAGE_1 24

// Conv 2
#define NCAN_IN_2 64
#define NCAN_OUT_2 32
#define SIZE_IMAGE_2 12

// Conv 3
#define NCAN_IN_3 32
#define NCAN_OUT_3 20
#define SIZE_IMAGE_3 6

// ------------------ MAXPOOL PARAMETERS ------------------

#define MAXPOOL_STRIDE 2
#define MAXPOOL_MP_SIZE 3

// ------------------ RESHAPE PARAMETERS ------------------

#define SIZE_IMAGE_4 3
#define NCAN_IN_4 20


// ------------------ PERCEPTRON PARAMETERS ------------------

#define NCAN_IN_5 180
#define NCAN_OUT_5 10
#define BASE_COEFFS_4 25920 /* 20160 + 9*32*20 */
#define BASE_BIAIS_4 116

// ------------------ DATA TYPES ------------------
// #define DATA_WIDTH 16
// #define DATA_FP_LOC 5

// #define COEFF_WIDTH 16
// #define COEFF_FP_LOC 5

// #define SIGNED true
// #define UNSIGNED false

// typedef ac_fixed<DATA_WIDTH,DATA_FP_LOC,SIGNED,AC_RND_INF,AC_SAT> image_type ;

// typedef ac_fixed<COEFF_WIDTH,COEFF_FP_LOC,SIGNED,AC_RND_INF,AC_SAT> coef_type ;

// typedef ac_fixed<4,4,UNSIGNED,AC_RND_INF,AC_SAT> led_type;

typedef float image_type ;
typedef float coef_type ;
typedef unsigned int led_type;

#endif
