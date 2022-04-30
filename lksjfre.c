#include<stdio.h>

int main(){

    int t ;
    scanf("%d", &t);
    int co =0 ;
    for(int i =0 ; i<t ;i++){
        char input[4];
        scanf("%s", input);
        if((input[0] =='+') || (input[2]=='+')){
            co++;

        }
        else {
            co--;
        }
    }
    printf("%d", co);

    return 0;


}
