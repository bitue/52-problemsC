#include<stdio.h>

int main (){

    int age =30 ;
    int *pAge =&age ;
    printf("%d \n", &*&age);
    printf("%p \n", pAge);


}
