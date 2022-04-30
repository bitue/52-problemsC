#include<iostream>
#include<algorithm>

using namespace std;
main() {
  string prog ;
  cin>>prog;

   cout << "Initial string: " << prog << endl;

   prog.erase(remove(prog.begin(), prog.end(), 'A'), prog.end());
   cout << "Final string: " << prog;
}
