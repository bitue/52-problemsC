#include<stdio.h>

int main (){

    int t ;
    int rec[3][2];
    scanf("%d", &t);
    for(int i =0 ; i<t ;i++){
        for(int j =0 ; j<3 ; j++){
            for(int k =0 ; k<2 ; k++){
                scanf("%d %d", &rec[i][j]);
            }
        }



    }

     for(int i =0 ; i<3 ; i++){
            for(int j=0 ;j<2 ; j++){
                printf("%d %d :", rec[i][j],rec[i][j]);
            }
        }



}
