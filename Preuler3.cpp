#include <iostream>
#include "funcionprima.h"
#include <math.h>
int main(){
long x = 600851475143;
long ultimo;
long factor;
if (bool (2== 0)){
    ultimo = 2;
    x = x/2;
}
else{
    ultimo=1;
    factor = 3;
    ultimo = sqrt(x);
    while (x>1 && factor<=ultimo){
        if (bool (factor=0)){
            x=x/factor;
            ultimo=sqrt(x);
            factor = factor + 2;
        }
    }
}
    if (x =1){
        cout<<ultimo<<endl;
    }
    else{ 
    cout <<x<< endl;
    }
return 0;
}
