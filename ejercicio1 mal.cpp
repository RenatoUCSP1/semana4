#include <iostream>
using namespace std;
int main(){
    int y, suma1=0;
    for (y>=1;y<=1000;y++){
        for (y;y%3==0;y++){
        suma1 = suma1 + y;
            
        }
        
    }

        int x, suma=0;
        for (x>=1;x<=1000;x++){
            for (x;x%5==0;x++){
            suma = suma + x;
            }
            
          }
          
    int z, resta=0;
    for (x>=1;x<=1000;x++){
            for (x;x%15==0;x++){
                resta = resta + x;
            }
            
          }
          
     cout <<"la suma es" << (suma+suma1)-resta <<endl;
     return 0;
}