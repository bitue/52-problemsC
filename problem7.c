#include <stdio.h>
#include <stdlib.h>

void main (){

    char line[10000];
    int T ;
    int count =0 ;
    long input ;
    char *p , *e ;
    p= line ;

    scanf("%d", &T);

    for(int i=0 ; i<T ; i++){
       scanf("%[^\n]", line);
       for(p =line ; ; p = e ) {

            input = strtol(p, &e , 10);
            if(p ==e ){
                break ;
            }
            count ++ ;

       }
       printf("%d \n", count);


    }




}
