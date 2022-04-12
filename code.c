#include<stdio.h>

void main(){

    int n ;
    scanf("%d", &n);
    int arr[n];
    int flag =1;
    for(int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0 ;i<n ; i++){
        if(arr[i] ==1) {
           flag=1;
        }
        if(arr[i]==0){
            flag=0 ;
        }
    }

    if(flag ==1 ){
        printf("HARD");
    }
    else {
        printf("EASY");
    }
}
