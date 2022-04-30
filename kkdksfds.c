

#include<stdio.h>
#include<string.h>

int main (){

    char input [105];
    char out[105];
    char fout[105];
    scanf("%s", input);
    // make this all lower ............
    for(int i =0 ; i< strlen(input); i++){
       if(input[i] <97){
         input[i] = input[i]+32;
       }

    }
    // all voel deleted ;
    for(int i =0, j=0 ; i<strlen(input) ; i++ , j++){
        if( (input[i]=='a') || (input[i]=='e') || (input[i]=='i') || (input[i]=='o') || (input[i]=='u')){
            j--;

        }
        else {
            out[j] = input[i];
        }
    }


    // make this display ....
    for(int i =0 ; i<strlen(input) ; i++){
        printf("%c", input[i]);
    }
    printf("\n");
    for(int i =0 ; i<strlen(out) ; i++){
        printf("%c", out[i]);
    }
    printf("\n");

    return 0;



}
