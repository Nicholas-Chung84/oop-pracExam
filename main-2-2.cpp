#include <iostream>

extern int bin_to_int(int array[], int);

int main(){
    int test[5]={1,0,1,0,1};
    std::cout<< bin_to_int(test,5)<<std::endl;
    return 0;
}