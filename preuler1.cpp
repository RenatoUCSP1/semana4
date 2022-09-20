#include <iostream>
using namespace std;
int main(){
int x,suma = 0;
for (x = 1; x < 1000; x++) {
    if (((x % 3) == 0) || ((x % 5) == 0)) {
        suma = suma + x;
    }
}
cout << "la suma es "<< suma << endl;
}