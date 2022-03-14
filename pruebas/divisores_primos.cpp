//---------------------------------------------------------------------
// Traducción de adac a C++ generada automáticamente
// Procesadores de Lenguajes. Universidad de Zaragoza
//---------------------------------------------------------------------

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


int num;

bool esPrimo(int a) {
int x;
x = 2;
if (((a == 0) || (a == 1) || (a == 4))) {
return false;
}
while ((x < a)){
if ((a % x == 0)) {
return false;
}
x = x + 1;
}
return true;
}
void divPrimos(int num) {
int i;
i = 2;
while ((num > 1)){
if ((esPrimo(i))) {
if ((num % i == 0)) {
num = num / i;
cout << " " << i;
}
else {
i = i + 1;
}
}
else {
i = i + 1;
}
}
cout  << " " << endl;
}


int main() {
cout  << "Este programa descompone el numero introducido en factores primos" << endl;
cout  << "Ejemplo: 434 = 2*7*31" << endl;
cout << "Introduce un numero(>0): ";
cin >> num;
while (num <= 0){
cout  << "El numero debe ser positivo." << endl;
cout << "Introduce un numero(>0): ";
cin >> num;
}
cout << "Factorizacion en numeros primos de " << num;
cout << ":";
divPrimos(num);

return 0;
}

