/*
  EJERCICIO 1

  Tienda mayorista de zapatos

  Ingresar la cantidad de zapatos que llevara un comprador,
  la tienda tiene la siguiente promoción en descuentos:

  Si son más de diez, se les dará un 10% de descuento sobre el total de la compra; 
  si el número de zapatos es mayor de veinte pero menor de treinta, se le otorga un 20% de descuento; 
  y si son más treinta zapatos se otorgará un 40% de descuento. El precio de cada zapato es de S/.80.

  Calcular el monto que debera pagar

  Input:
  - Cantidad de zapatos que llevará
*/

#include<iostream>
using namespace std;

int main() {
  int number_shoes;
  int monto;
  cout << "Ingresar cantidad de zapatos: ";
  cin >> number_shoes;
  monto = number_shoes*80;
  if (number_shoes >= 10) {
    monto = monto*0.9;
  } else if (number_shoes >= 20 && number_shoes <= 30) {
    monto = monto*0.8;
  } else if (number_shoes > 30) {
    monto = monto*0.6;
  }
  cout << "El precio seria: " << monto;
}

