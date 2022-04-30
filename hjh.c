#include<stdio.h>
#include <stdlib.h>

int main (){

    int T ;
    scanf("%d", &T);
    for(int i=0 ; i<T ; i++){
        float one , two;
        scanf("%f %f", &one , &two);
        if(one > two){
            printf(">");
        }
        else if (one == two){
            printf("=");
        }
        else if (one < two) {
            printf("<");
        }

    }



}
