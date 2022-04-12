#include<stdio.h>

int main (){

    int weight ;
    scanf("%d", &weight);
    if( (weight % 2 ==1 ) ||  ( weight ==2  )) {
        printf("No");
        return 0;
    }
    else if (weight >2) {
        printf("Yes");


    }



    return 0 ;



}
