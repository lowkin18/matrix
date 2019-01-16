#include "matrix_math.h"

#define NULL 0

int main()
{
    matrice test_data;
    matrice * ptr_test_data;
    test_data.columns = 3;
    test_data.rows = 3;
    int * null_ptr = NULL;
    init_matrix(ptr_test_data , null_ptr,test_data.columns,test_data.rows);
    print_matrix(ptr_test_data);
    
}