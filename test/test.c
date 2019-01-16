#include "matrix_math.h"


double matrix_init_values[] = {1.0,20,33,44,55,22,30,50,10,20,22,33,99,77,22,33,44,55,22,37,29,44,58,22,11,23,15,17,20,201,250,502,10,200,124,10,4001,20,140,10,15,150,16,17,12,
22,24,125,22,33,111,5,22,55,43,33,22,11,55,66,24,3,2,1,55,4,5,6,7,8,2,1,25,16,7,77,81,12,54,33,54,35,2,5,6,7,9,12,55,1265,61,51,33,55,16,66,126,77,88,22,33,67,12,512,33,125,51
,12,555,21,33,1551,25,53,516};


int main()
{
    matrice test_data;
    test_data.columns = 10;
    test_data.rows = 10;
    //double * null_ptr = NULL;
    double *ptr_matrix_values = matrix_init_values;
    init_matrix(&test_data , ptr_matrix_values,test_data.columns,test_data.rows);
    print_matrix(&test_data);   //prints out matrix into terminal
    matrice test_data1 = test_data;
    convert_upperTriangle_matrix(&test_data1);
    print_matrix(&test_data1);   //prints out matrix into terminal

}