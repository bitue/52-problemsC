

#include<stdio.h>

void main (){

    int arr[3];
    for(int i=0 ; i< 3 ; i++){
        scanf("%d", &arr[i]);
    }
    // bouble sort
    for(int i =0 ; i<2 ; i++){
        int temp ;
        if(arr[i] >= arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1] ;
             arr[i+1] = temp;


        }
    }

   int res = arr[0] + arr[1];
   printf("%d", res);



}
