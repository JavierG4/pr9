 /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file  Sum of squares
  * @author Javier Gonzalez Brito alu0101548197@ull.edu.es
  * @date nov 16 2023
  * @brief that reads a natural number n, and prints the result of the following sum:
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98458_en
  */
#include <iostream>

void min_max(int a, int b, int& mn, int& mx){
  if ( a == b) {
    mn = a;
    mx = b;
  }
  if ( a > b ) {
    mx = a;
    mn = b;
  }
  if ( b > a ) {
    mx = b;
    mn = a;
  }
}