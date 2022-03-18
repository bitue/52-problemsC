#include<bits/stdc++.h>
using namespace std;

int main(){
    int T ;
    int n;
    cin>>T;
    for(int i=0 ; i<T ; i++) {
        cin>>n;
        int res =0 ;
        int rem ;
        for(int j=0 ; j<5 ; j++){
            if(j ==0 || j==4 ) {
                res = res + n % 10 ;
            }
            n = n / 10 ;



        }

        cout<<res;
    }

}
