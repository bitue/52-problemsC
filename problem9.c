#include <stdio.h>
#include <math.h>


void main (){

    int T ;
    scanf("%d", &T);
    for(int i =0 ; i<T ; i++){


       double number, squareRoot;
       int root_num ;


       scanf("%lf", &number);

       // computing the square root
       squareRoot = sqrt(number);
       root_num = sqrt(number);
       if( (squareRoot - root_num > 0 ) || (squareRoot -root_num) <0 ) {
        printf("NO");
       }
       else {
        printf("YES");
       }


    }



}
