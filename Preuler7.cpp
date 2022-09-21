#include <iostream>
#include "funcionprima.h"
int main (){
int numprimos = 1;
int num = 1;
 
while (numprimos < 10001) {
    num = num + 2;
    if (funcionprima(num)) {
        numprimos++;
    }
}
cout<<num<<endl;
return 0;
}
