#include<stdio.h>
#include<string.h>

int main (){

   int T ;
   scanf("%d", &T);
   for(int i =0 ; i<T ; i++){
       int co =0 ;
       char text[100];
       scanf("%s", text );
       for(int j=0 ; j<strlen(text); j++){

           co++ ;




       }
       int res[3];

       if(co > 10){

           res[0] = text[0];
           res[1] = co-2 + '0' ;
           res[2]= text[co-1];
           printf("%s", res);
           return 0 ;



       }
       else {
         printf("%s", text);
       }




   }



    return 0 ;



}
