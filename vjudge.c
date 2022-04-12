#include<stdio.h>

void main (){

    int grid[3];
    int count =0 ;



    for(int i=0 ; i<3 ; i++){
        int point;
        scanf("%d", &point);
        grid[i]= point ;
    }

    for(int i=0 ; i<3 ; i++){
        if(grid[i]==1) {
            count ++ ;

        }

    }

    printf("%d", count);

}
