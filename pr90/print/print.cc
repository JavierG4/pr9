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
  * @see https://jutge.org/problems/P99541_en
  */
#include <iostream>

void print(int s, char c, int n) {
  for (int i = 0; i < s; i++) {
    std::cout << " ";
  }
  for (int i = 0; i < n; i++) {
    std::cout << c;
  }
  std::cout << "" << std::endl;
}

int main() {
  print(2,'X',2);
}