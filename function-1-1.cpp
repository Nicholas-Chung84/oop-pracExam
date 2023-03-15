#include <iostream>

void print_matrix(int array[10][10]){

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            std::cout<< array[i][j] <<" ";
        }
        std::cout<<array[9][9]<<std::endl;
    }
}

