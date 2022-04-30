#include<stdio.h>

int main (){
    int t ;
    scanf("%d", &t);
    for (int i =0 ; i<t ; i++){
        int n  ;
        scanf("%d", &n);
        int op = n ;
        int rev =0 ;
        int rem=0 ;
        while(op !=0){
            rem = op % 10 ;
            op = op/10 ;
            rev = rev*10 + rem ;

        }
        printf("reverse : %d \n", rev);
        if(rev == n ){
            printf("Yes \n");

        }
        else {
            printf("No \n");
        }


    }



    return 0;




}
