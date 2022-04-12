#include <stdio.h>

void main (){

    int arr[4];

    for (int i =0 ; i<3 ; i++){

        scanf("%d", &arr[i]);


    }
    for(int i =0 ; i<2 ; i++){
        int temp ;
        if(arr[i] >= arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1] ;
             arr[i+1] = temp;


        }
    }

    int res = arr[2] - (arr[0]+ arr[1]);
    if(res ==0) {
        printf("Yes");
    }
    else {
        printf("No");
    }





}
