#include <iostream>
using namespace std;
int main(){
int num1 = 2;
int num2 = 0;
int ans = 2;
int suma = 0;
 
while (ans < 4000000) {
    suma = suma  + ans;
 
    ans = (4*num1) + num2;
    num2 = num1;
    num1 = ans;
}

    cout<<"La suma es "<<suma<<endl;
    
return 0;
}