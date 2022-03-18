#include <stdio.h>

void main () {

    int T ;
    int n ;

    scanf("%d", &T);
    for (int i=0 ; i<T ; i++){
        scanf("%d", &n);
        printf("case %d :", i);

        for(int j=1 ; j<=n ; j++){

            if(n%j==0){
                printf("%d ", j);

            }


        }

    }


}
