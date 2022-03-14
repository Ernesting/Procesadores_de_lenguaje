//---------------------------------------------------------------------
// Traducción de adac a C++ generada automáticamente
// Procesadores de Lenguajes. Universidad de Zaragoza
//---------------------------------------------------------------------

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;


int matriz[1000];
int numF;
int numC;
int contF;
int contC;
int valor;
int rotacion;

int sitio(int numF,int numC,int tam) {
return ((((numF - 1) * tam) + numC) - 1);
}
void colocar(int matriz[1000],int numF,int numC,int tam,int valor) {
matriz[sitio(numF,numC,tam)] = valor;
}
int ver_comp(int matriz[1000],int numF,int numC,int tam) {
return matriz[sitio(numF,numC,tam)];
}
void crear_matriz(int matriz[1000],int numF,int numC) {
int contF;
int contC;
contF = 1;
while (contF <= numF){
contC = 1;
while (contC <= numC){
cout << "Introduce componente de la fila " << contF;
cout << " y la columna " << contC;
cout << ":";
cin >> valor;
colocar(matriz,contF,contC,numC,valor);
contC = contC + 1;
}
contF = contF + 1;
}
}


int main() {
cout  << "Este programa rota una matriz la matriz introducida los grados indicados" << endl;
cout << "Introduce el numero de filas de la matriz(>0): ";
cin >> numF;
while (numF <= 0){
cout  << "El numero debe ser positivo." << endl;
cout << "Introduce el numero de filas de la matriz(>0): ";
cin >> numF;
}
cout << "Introduce el numero de columnas de la matriz(>0): ";
cin >> numC;
while (numC <= 0){
cout  << "El numero debe ser positivo." << endl;
cout << "Introduce el numero de columnas de la matriz(>0): ";
cin >> numC;
}
crear_matriz(matriz,numF,numC);
cout  << "La matriz introducida es la siguiente: " << endl;
contF = 0;
while (contF < 20){
cout << " " << matriz[contF];
contF = contF + 1;
}
cout  << "La matriz introducida es la siguiente: " << endl;
contF = 1;
while (contF <= numF){
contC = 1;
while (contC <= numC){
cout << " " << ver_comp(matriz,contF,contC,numC);
contC = contC + 1;
}
cout  << " " << endl;
contF = contF + 1;
}

return 0;
}

