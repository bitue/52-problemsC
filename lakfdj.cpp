#include <iostream>
using namespace std;


int main (){

    string team ;
    cin>>team ;
    int l = team.length();
    int co_0 =0 ;
    int co_1=0;
    for(int i =0 ; i<l ; i++){
       if(team[i]=='0'){
          co_0++;
          co_1=0;
       }
       if(team[i]=='1'){
         co_0=0;
         co_1++;
       }
       if((co_0 ==7 )|| (co_1 ==7 )){
          printf("YES");
          return 0;
       }

    }
    printf("NO");


    return 0;



}
