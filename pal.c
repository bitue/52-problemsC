#include <stdio.h>

void main (){

    int number ;
    int reverse_number =0 ;
    scanf("%d", &number);
    int loop =0;

    while(number !=0){

        reverse_number = (number % 10 + reverse_number *10 );
        number =number/10 ;
        loop++ ;
        printf(" loop : %d , rev :%d ,  num : %d  \n",loop , reverse_number , number);
    }
    printf("%d", reverse_number);
}
