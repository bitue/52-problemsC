#include<stdio.h>

void main (){
    int arr[3];


    for (int i =0 ; i<3 ; i++){

        scanf("%d", &arr[i]);


    }
    int co =0  ;

    for(int i = arr[0] ; i <= arr[1] ; i++){
       co++ ;
    }
    printf("%d \n", co);


}
