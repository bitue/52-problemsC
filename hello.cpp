#include<bits/stdc++.h>
using namespace std ;


int main (){

  int T ;
  cin>>T ;
    for(int i=0 ; i<T ; i++){
        int one , two;
       cin>>one>>two;
        if(one > two){
            cout<<">"<<endl;
        }
        else if (one == two){
           cout<<"="<<endl;
        }
        else if (one < two) {
            cout<<"<"<<endl;
        }

    }


    return 0;




}
