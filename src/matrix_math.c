//main functions for matrix math
#include "matrix_math.h"
//main function to test the functionality of the other functions
//returns 0 on failure 1 on success
int init_matrix(matrice*data, double dataset[],int cLength, int rLength)
{
data->columns = cLength;
data->rows = rLength;

    if(!dataset)
    {
        for(int i = 0; i<cLength;i++)
        {
            for(int j = 0; j<rLength;j++)
            {
                data->data[i][j] = 0;
            }
        }    
    }
    else{
        int count = 0;
        for(int i = 0; i<rLength;i++)
        {
            for(int j = 0; j<cLength;j++)
            {
                data->data[i][j] = dataset[count];
                count++;
            }
        }   
    }

    return 1;

}



int print_matrix(matrice * data)
{
    for(int i = 0; i<data->rows;i++)
        {
            for(int j = 0; j<data->columns;j++)
            {
                printf("%f\t", data->data[i][j]);
            }
            printf("\n");
        }  


    
}



int find_determinant_matrix(matrice * data, double *det)
{
    if(convert_upperTriangle_matrix(data))return 0;
    *det = 1;
    for(int i = 0; i < data->rows; i++)
        *det *= data->data[i][i];
    return 1;
}


//converts matrix to upper triangle
int convert_upperTriangle_matrix(matrice * data)
{
  if(data->rows!=data->columns)return 0;
  double ratio_val = 1;  //ratio to get value to 0

  for(int i = 0; i < data->rows; i++){
        for(int j = 0; j < data->rows ; j++){
            if(j>i){
                ratio_val = data->data[j][i]/data->data[i][i];
                for(int k = 0; k < data->rows; k++){
                    data->data[j][k] -= ratio_val * data->data[i][k];
                }
            }
        }
    }  
    return 1;
}