//main functions for matrix math
#include "matrix_math.h"
//main function to test the functionality of the other functions
//returns 0 on failure 1 on success
int init_matrix(matrice * data, int dataset[],int cLength, int rLength)
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



int print_matrix(matrice*data)
{
    for(int i = 0; i<data->rows;i++)
        {
            
            for(int j = 0; j<data->columns;j++)
            {
                printf("%d/t", data->data[i][j]);
            }
            printf("/n");
        }  


    
}