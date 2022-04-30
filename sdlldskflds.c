#include <stdio.h>
int main() {
   int T  ;
   scanf("%d", &T);
    for(int i =0 ; i< T ;i++){
   int n , inputNumber ;
   scanf("%d", &inputNumber);
   n = inputNumber;
   int rev =0 ;
      while (n != 0) {
        int remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }

    if (inputNumber == rev){
          printf("Case %d: Yes", i+1);
    }

    else {
             printf("Case %d: No", i+1);

    }


    }





    return 0;
}
