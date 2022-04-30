#include<stdio.h>
int main (){

    int n1, n2 ;
    scanf("%d %d", &n1 , &n2);
    if(n1<n2){
        int temp = 0 ;
        temp= n2 ;
        n2 = n1 ;
        n1 =temp ;

    }

    while(n2 !=0 ){

        int rem = n1 % n2 ;
        n1 = n2 ;
        n2 = rem  ;




    }

    printf("GCD is %d", n1 );




}
