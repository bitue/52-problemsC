#include<stdio.h>

int main (){

    int arr [3];
    for(int i =0 ; i<3 ;i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0 ; i<2 ;i++){
        int temp =0 ;
        if(arr[i] > arr[i+1] ){
           temp = arr[i];
           arr[i]= arr[i+1];
           arr[i+1]= temp ;


        }
    }
    printf("%d", arr[0]+ arr[1]);

    return 0;


}
