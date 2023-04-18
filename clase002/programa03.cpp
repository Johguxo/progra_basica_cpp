#include<iostream>
using namespace std;

int main() {
  // "||" OR
  // "&&" AND
  int edad;

  cout << "Ingresar edad: ";
  cin >> edad;

  // La edad es valida solo de 0 a 100 años
  if (edad < 0 || edad > 100) {
    cout << "La edad no es valida" << endl;
  } else if (edad >= 18) {
    cout << "Soy mayor de edad";
  } else {
    cout << "Soy menor de edad";
  }
}