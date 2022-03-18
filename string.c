#include<stdio.h> // Including header file
#include<string.h>
int input (char str[] , int n){

    int ch, i = 0;
    while((ch=getchar())!='\n')
        if(i<n)
            str[i++]=ch;
    str[i]='\0';
    return i;




}
int main(){

  char msg[100];
  //int n = input(msg,8);
  // printf("%s %d",msg,n);
  char name [10]="bitue";
  char name2[2];
  strncpy(name2, name, sizeof(name2));
  name2[sizeof(name2)-1] ='\0' ;
  printf("%s", name2);

  for(int ch ='A'; ch <='Z'; ch++){
    putchar(ch);
    printf("\n");
  }

  return 0;
}
