#include <stdio.h>
#include <string.h>
void main (){
    int n ;
    scanf("%d", &n);
    char long_num[101];

    for(int i=0 ; i<n ; i++) {
        scanf("%s", &long_num);
        // now need the last digit of the chars and then follow it that it is whether even or odd
        int len = strlen(long_num);
        if(long_num[len-1]%2 ==0) {
            printf("even \n");
        }
        else {
            printf("odd \n");
        }

    }

}
