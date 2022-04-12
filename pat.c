#include<stdio.h>
#include<string.h>

int main (){

    char text[100];
    char text2[200];
    char pattern[100];
    int flag =0 ;
    gets(text);
    gets(pattern);
    for(int i =0 ; i< 200 ;i++){

    }
    for(int i =0 ; i< strlen(pattern) ; i++ ){

        for(int j=0 ; j< strlen(text) ; j++) {
            if(pattern[i] == text[j]){
              text[j] ='1';

            }

        }

    }



    for(int i =0 ; i< strlen(text) ; i++){
        printf("%c", text[i]);
    }
     for(int i =0 ; i< strlen(pattern) ; i++){
        printf("%c", pattern[i]);
    }




    return 0 ;



}
