#include <iostream>

extern void print_matrix(int array[10][10]);

int main(){
    int test[10][10]={{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0}};
    print_matrix(test);
    return 0;
}