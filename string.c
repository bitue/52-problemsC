#include<stdio.h> // Including header file
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
  int n = input(msg,8);
  printf("%s %d",msg,n);

  return 0;
}
