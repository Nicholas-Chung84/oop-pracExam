#include <iostream>

extern int palindrome_sum(int array[], int);

int main(){
    int test[5]= {1,2,0,2,1};
    std::cout<< palindrome_sum(test,5) <<std::endl;
    return 0;
}