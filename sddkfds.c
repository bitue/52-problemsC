#include<stdio.h>

int main (){

    int t ;
    scanf("%d", &t);
    float sum =0 ;
    for(int i=0 ; i<t ; i++){
        float arr[2];
        for(int i=0 ; i<2 ; i++){
            scanf("%f", &arr[i]);
        }
        sum = arr[0]* arr[1] + sum ;

    }

    printf("%0.3f", sum);

    return 0;


}
