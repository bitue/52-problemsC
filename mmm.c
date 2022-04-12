#include <stdio.h>

int main (){

  char arr[3];
  scanf("%s", &arr);

  int a =1 ;
  int b=1 ;
  int c =1 ;
  for(int i =0 ; i< 3; i++){
    if(arr[i]=='a'){
        a =0 ;
    }
    if(arr[i]=='b'){
        b=0 ;
    }
    if(arr[i]=='c'){
        c=0;
    }
  }
  if((a==0) && (b==0) && (c ==0) ){
     printf("Yes");

  }
  else {
    printf("No");
  }







  return 0 ;
}
