#include<stdio.h>

int main(){

    int arr[3];
    for(int i =0 ; i<3 ; i++){
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
    if(arr[0] ==5 && arr[1] ==5 && arr[2]==7) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;


}
