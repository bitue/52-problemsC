#include <stdio.h>

void main (){

    int T ;
    scanf("%d", &T);
    for(int i =0 ; i< T ; i++){
        int n1 , n2 , n3 ;
        scanf("%d %d  %d", &n1 , &n2 , &n3 );
        printf("case %d :", i);
        if((n1 > n2) && (n1 > n3 ) ) {
            printf("%d", n1);
            if(n2>n3) {
                printf("%d  %d", n2,  n3);
            }
        }
        else if ( (n2 > n1 ) && (n2 > n3 ) ){
             printf("%d", n2);
             if(n1 > n3){
                 printf("%d  %d", n1 , n3);
             }

        }
        else {
            printf("%d %d %d", n1 , n2 , n3);
        }
    }



}
