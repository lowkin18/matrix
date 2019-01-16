// Header file for matrix math
//Data Structures
#include <stdio.h>



typedef struct matrice
{
    int rows;
    int columns;
    int *data[];
}matrice;




//initialize matrix
int init_matrix(matrice * data, int dataset[],int cLength, int rLength);

//print matrix to console
int print_matrix(matrice*data);

//Functions