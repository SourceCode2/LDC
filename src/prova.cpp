#include <iostream>
#include "prova.h"
saluto::saluto() {
  parola = "ciao";
}
void saluto::scrivi() {
  std::cout << parola << '\n';
}
