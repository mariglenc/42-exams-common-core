#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;  
}

int main(){
    int var1 = 1;
    int var2 = 5;
    printf("BEFORE \n");
    printf("var1: %i, \n", var1);
    printf("var2: %i, \n", var2);
    ft_swap( &var1, &var2);
    printf("AFTER \n");
    printf("var1: %i, \n", var1);
    printf("var2: %i, \n", var2);
}