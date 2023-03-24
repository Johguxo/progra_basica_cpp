#include <iostream>
using namespace std;

int main() {
  //Operaciones matematicas
  int x;
  int y;
  int suma;
  int multiplicacion;
  double division;

  x = 5;
  y = -2;
  suma = x + y;

  cout << "La suma es: " << suma << endl;

  cout << "Vamos a usar nuestros numeros: " << endl;

  cout << "Ingresar x: ";
  cin >> x;
  cout << "Ingresar y: ";
  cin >> x;

  suma = x + y;
  multiplicacion = x*y;
  division = 1.0*x/y;

  cout << "La nueva suma es: " << suma << endl;
  cout << "La multiplicacion es: " << multiplicacion << endl;
  cout << "La division es: " << division << endl;

}