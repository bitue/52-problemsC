#include<stdio.h>

int main (){



    int all[10005];
    int co=0  ;
    for(int i=0 ; i<1000 ; i++){


        scanf("%d", &all[i]);

        if(all[i] ==0 ){
            break ;
        }
        else {
            co++;
        }

    }
    for(int i=0 ; i<co ; i++){
            printf("Case %d: %d \n", i+1 , all[i]);

    }




    return 0 ;




}
