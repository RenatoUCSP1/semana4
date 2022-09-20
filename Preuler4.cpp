#include <iostream>
using namespace std;
int invertir(int);

int invertir(int num){
    int resultado=0;
    while(num>0){
        resultado = resultado*10;
        resultado = resultado + num %10;
        num = num/10;
    }
    return resultado;
}

int main(){
   
    int x = 906609;
    int z,j;
    int mult;
    
    for (int z=1;z<=999;z++){
            for (j=1;j<=999;j++){
                mult = z*j;
                if (mult = invertir(x)){
                    mult=invertir(x);
                }
}
 
}
cout<<mult<<endl;
return 0;
}