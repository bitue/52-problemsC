#include<stdio.h>

int main (){

    int range ;
    scanf("%d", &range);

    int flag=0;
    int co =0 ;
    for(int i =4 ; i<range ; i++){
        flag=0;
        int limit = sqrt(i);
        for(int j=2 ; j<limit ;j++){
            if(i%j ==0 ){
                flag=1;
                break;
            }
        }
        if(flag==0){
            co++;
        }


    }
    printf("%d", co);


    return 0;



}
