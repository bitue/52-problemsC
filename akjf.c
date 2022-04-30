#include<stdio.h>


int main (){

    int t ;
    scanf("%d", &t);
    for(int i =0 ;i<t ; i++){
        int input ;
        int n = input ;
            int rev =0 ;
            int reminder =0 ;
        scanf("%d", &input);
        if(input /10 ==0){
            printf("Yes");
        }
        else {


            while(n/10 !=0){
                n = n/10 ;
                reminder = n% 10 ;
                rev = rev*10 + reminder ;


            }
        }
        printf("%d", rev);
    }

    return 0 ;


}
