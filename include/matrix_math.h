// Header file for matrix math
//Data Structures
#include <stdio.h>

//These are the max values--Need to think of a better way
//To dynamically allocate column and row size for data multi-dimensional array
#define MAX_ROW 10
#define MAX_COLUMN 10

typedef struct matrice
{
    int rows;
    int columns;
    double data[MAX_ROW][MAX_COLUMN]; 
}matrice;


//initialize matrix pass data in for top left corner to bottom left corner of matrix
int init_matrix(matrice * data, double dataset[],int cLength, int rLength);

//print matrix to console
int print_matrix(matrice * data);

//will invert the matrix or return 0 if non-invertible
int invert_matrix(matrice *data);

//will find the determinant of the matrix and return the value
int find_determinant_matrix(matrice * data, double *det);

//Converts matrix to upper triangle
int convert_upperTriangle_matrix(matrice * data);


//Functions