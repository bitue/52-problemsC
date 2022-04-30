#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (){

    char in[105];
    char out[106];



    scanf("%s", in);
    // lowercase all ;
    for(int i=0 , j=0 ; i<strlen(in); i++){

        if(in[i] <=90){
            in[i] = in[i]+32 ;
            out[j]=in[i];
            j++;
        }








    }

    for(int i =0 ;i<strlen(in); i++){
        printf("%c", in[i]);
    }
     for(int i =0 ;i<strlen(out); i++){
        printf("%c", out[i]);
    }




    return 0;




}
