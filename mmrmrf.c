#include<stdio.h>

int main (){

   int d , k ,l , m , n ;
   int arr[100005]={0};
   scanf("%d", &k);
   scanf("%d", &l);
   scanf("%d", &m);
   scanf("%d", &n);
   scanf("%d", &d);

   if(k==1 ){
    printf("%d", d);
    return 0;

   }
   else {
     for(int i =k ; i<=d; i+=k){
        arr[i]=1;

     }
      for(int i =l ; i<=d; i+=l ){
        arr[i]=1;

     }
      for(int i =m ; i<=d; i+=m ){
        arr[i]=1;

     }
      for(int i =n ; i<=d;    i+=n ){
        arr[i]=1;

     }
   }
   int co=0 ;

   for(int i=1 ;i<=d ; i++){
     if(arr[i]==1){
        co++;
     }
   }

   printf("%d ", co);



    return 0;


}
