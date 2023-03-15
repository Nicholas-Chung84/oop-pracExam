#include <iostream>

bool is_array_palindrome(int integers[], int length){
    if(length<1){
        return false ;
    }

    for(int i=0; i<length; i++){
        if(integers[i] != integers[length-i-1]){
            return false;
        }
    }
    return true;
}

int sum_integers(int integers[], int length){
    if(length<1){
        return -1;
    }

    int sum=0;

    for(int i=0; i<length; i++){
        sum += integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length){
    if(length<1){
        return -1;
    }
    int sum=0;
    if(is_array_palindrome(integers, length)==false){
        sum=-2;
    }else{
        sum =sum_integers(integers, length); 
    }
    return sum;
}