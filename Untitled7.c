#include<stdio.h>


int input (char wellcome[], int n ) {
   int i =0 ;
   int ch;
   while( (ch = getchar()) != '\n'){

        if(i<n){
            wellcome[i] = ch ;
            i++;
        }

   }


   wellcome[i]='\0';
   return i ;




}

void main (){

    char msg [100];
    int len = input(msg , 10);
    printf("%d %s", len, msg);






}
