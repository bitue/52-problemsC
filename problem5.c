#include<stdio.h>

void main (){

    int T ;
    int n ;
    scanf("%d", &T);

    for(int i=0 ; i<T ; i++){
        scanf("%d", &n);
        for(int j=0 ; j<n ; j++) {
            for(int k=0 ; k<n ; k++){
                printf("*");
            }
            printf("\n");
        }


    }


}
