#include<stdio.h>

int main (){
    int t ;
    scanf("%d", &t);
    for(int i =0 ; i<t ; i++){
        int num ;
        scanf("%d",&num);
        int original = num ;

        if(num /10 ==0){
            printf("Yes");


        }
          int rev =0 ;
        while (num /10 != 0){


            int rem  = num %10  ;
            num = num /10 ;
            rev = rev *10 + rem ;
        }
        if(original == rev ){
            printf("Yes");
        }
        else {
            printf("No");
        }

    }
    return 0 ;


}
