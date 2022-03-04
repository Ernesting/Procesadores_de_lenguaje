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
int numDivisoresPrimos(int num) {
int numD;
int i;
numD = 0;
i = 2;
while ((num > 1)){
if ((esPrimo(i))) {
if ((num % i == 0)) {
num = num / i;
numD = numD + 1;
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
return numD;
}
bool comprobarBalanceado(int num) {
int numD;
numD = numDivisoresPrimos(num);
if ((numD % 2 == 0)) {
return true;
}
else {
return false;
}
}


int main() {
cout  << "Este programa comprueba que el numero introducido es balanceado, es decir, el numero de divisores primos es par" << endl;
cout  << "Ejemplo: 24 = 2*2*2*3. Es balanceado porque tiene cuatro divisores primos." << endl;
cout << "Introduce un numero(>0): ";
cin >> num;
while (num <= 0){
cout  << "El numero debe ser positivo." << endl;
cout << "Introduce un numero(>0): ";
cin >> num;
}
cout << "Divisores de " << num;
cout << ": ";
if ((comprobarBalanceado(num) == true)) {
cout  << "El numero introducido es balanceado" << endl;
}
else {
cout  << "El numero introducido no es balanceado" << endl;
}

return 0;
}

