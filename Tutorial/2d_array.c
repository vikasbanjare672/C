#include <stdio.h>

void User_input(int rows , int cols , int *num);
void print_array(int rows , int cols , int *num);
void sort_array(int total , int *num );

int main(){

    int num[][5] = {{},{},{},{},{}}; // 5 rows 4 columns == 20 inputs

    int rows = sizeof(num)/sizeof(num[0]);
    int cols = sizeof(num[0])/sizeof(num[0][0]);
    int total = rows * cols ;

    User_input(rows ,cols , &num[0][0]);

    printf("\n");

    printf("Unsorted array");
    print_array(rows , cols , &num[0][0]);

    printf("\n\n");

    printf("Sorted array");
    sort_array(total , &num[0][0]);

    print_array(rows , cols , &num[0][0]);
    
    return 0;
}

void User_input(int rows , int cols , int *num){

    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter you num in matrix : ");
            scanf("%d", num + i * cols + j);
        }
    }
}

void print_array(int rows , int cols , int *num){
    for (int i = 0; i < rows; i++){
        printf("\n");
        for(int j = 0; j < cols; j++){
            printf("%d " , *(num + i * cols + j));   
        }
    }
}

void sort_array(int total , int *num ){
    
    int *flat = num; // treat the 2D matrix as one flat 1D array since it's stored contiguously in memory

    for(int i = 0; i < total - 1; i++){              // total-1 passes are enough to sort everything
        for(int j = 0; j < total - 1 - i; j++){      // stop 1 early so flat[j+1] never goes out of bounds
            if(flat[j] > flat[j+1]){
                int temp = flat[j];
                flat[j] = flat[j + 1];
                flat[j + 1] = temp;
            }
        }
    }
}