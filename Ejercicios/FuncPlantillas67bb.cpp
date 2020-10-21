
#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPO>
TIPO maximo(TIPO num1, TIPO num2, TIPO num3);

int main(){
 
 cout << "El valor maximo es: " << maximo(3.0,80.9,100.1) << endl; 
 
 getch();
 return 0;
}

template <class TIPO>
TIPO maximo(TIPO num1, TIPO num2, TIPO num3){
 TIPO max = num1;
 if(num2 > num1 && num2 > num3){
  max = num2;
 }
 if(num3 > num1 && num3 > num2){
  max = num3;
 }
 
 return max;
}
