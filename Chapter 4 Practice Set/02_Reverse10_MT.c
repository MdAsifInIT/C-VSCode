// Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>

int main(){
    int n=10, i=10;
    for(; i > 0; i--){
        printf("%d * %d = %d\n", n,i,n*i);
    }
    return 0;
}