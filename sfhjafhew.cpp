#include <iostream>
#include <string>
using namespace std ;


int main (){
    string text , pat ;
    cin>>text ;
    cin >> pat ;
    string d_text = text + text ;
    int co =0 ;

    for( int i =0 , j =0 ; i<d_text.length() , j < pat.length() ; i++){
        if(d_text[i]== pat[j]){
            co++ ;
            j++;

        }
        else {
            co=0 ;

        }
    }
    if(co == pat.length()){
        cout<<"Yes"<<endl;
    }
    else {
         cout<<"No"<<endl;

    }


}
