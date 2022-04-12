#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int d ;
    cin>>d ;

    for (int i=2 ;i<d ; i++){
       int limit = sqrt(d);

       for(int j=2 ; j<limit ; j++){

           if(d%j ==0){
             break ;
           }

       }
    }


    return 0;



}
