#include<iostream>

using namespace std ;


int main (){

    string text , pattern ;
    cin>>text >> pattern ;

    string add_text = text + text ;
    int flag =0 ;

    for(int i =0 ; i<pattern.length(); i++){
        if(pattern[i]==text[i]){
            i--;
            flag++;

        }

    }

    if(flag == pattern.length()){
        printf("Yes");
        return 0;
    }
    else {
        printf("No");
    }

    return 0 ;



}



