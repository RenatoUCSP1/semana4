#include <iostream>
using namespace std;

int main (){
int x = 0, y = 0, z = 0;
int j = 1000;

bool valor = false;
for (x = 1; x < j / 3; x++) {
    for (y = x; y < j / 2; y++) {
        z = j - x - y;
 
        if (x * x + y * y == z * z) {
            valor = true;
            break;
        }
    }
 
    if (valor) {
        break;
    }
}
cout << x * y * z << endl;
return 0;
}