#include <iostream>
#include <math.h>
using namespace std;
int main (){
int sum = 0;
int squared = 0;
int result = 0;
const int N = 100;
 
for (int i = 1; i ; sum += i){
    squared += i * i;

    result = sum * sum - squared;
}
cout << result << endl;
}