#include<stdio.h>


void main (){

    int T ;
    int n ;
    scanf("%d", &T);
    for(int i=0 ; i<T ; i++) {
        scanf("%d", &n);
        int res =0 ;
        int rem ;
        for(int j=0 ; j<5 ; j++){
            if(j ==0 || j==4 ) {
                res = res + n % 10 ;
            }
            n = n / 10 ;



        }

        printf("%d", res);
    }



}
