#include <iostream>
using namespace std;
int plusone(int);
int main(){
int i=1;
cout << i << endl;
cout << plusone(i) << endl;
cout << i << endl;
return 0;
}
int plusone(int i){
i=i+1;
return i;
}
