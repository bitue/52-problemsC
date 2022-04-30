#include<stdio.h>

int main (){

    int t , co=0 ;
    int arr[105];
    scanf("%d", &t);

    for(int i =0 ; i<t ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0 ; i<t ; i++){
        if(arr[i]<0){
            co ++;
        }
    }
    printf("%d", co);

    return 0;



}
