#include<iostream>

using namespace std;

int main() {
  //CONDICIONALES
  // Si nota = 6, es desaprobado
  // Si nota = 18, es aprobado
  // IF ELSE, CONDICION = BOOLEANO (True, False)
  // ">" MAYOR 
  // ">=" MAYOR IGUAL
  // "<=" MENOR IGUAL
  // "==" IGUALDAD
  int var = 5;
  int num = 34;
  int new_num;
  if (var > num) {
    cout << "Hola, entro a la condicion" << endl; 
  } else {
    cout << "Oh no, no entro a la condicion" << endl;
  }
  cout << "Ingresar el numero: ";
  cin >> new_num;
  if (var < new_num) {
    cout << "El numero ingresado es mayor que 5" << endl;
  } else {
    cout << "El numero ingresado es menor que 5" << endl;
  }
  if (var == new_num) {
    cout << "El numero es igual a 5" << endl;
  }
}