#include<stdio.h>
#include<string.h>

int main (){

    char team[105];
    scanf("%s", team);

    int co_1 =0 ;
    int co_0 =0 ;

    for(int i=0 ; i<strlen(team) ; i++){
     if(team[i]=='0'){
        co_0++;
         if(co_0 ==7){
                printf("Yes\n");

                return 0 ;
            }

        if(team[i+1] =='1'){

            co_0=0;

        }
     }
     if(team[i]=='1'){
        co_1++;
        if(co_1==7){
            printf("Yes\n");

            return 0 ;
        }
        if(team[i+1] =='0'){

         co_1=0;

        }
     }

    }
      printf("No\n");


    return 0;


}
