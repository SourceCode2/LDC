#include <iostream>
#include <cstdlib>
#include "zeb89.h"
zeb89::zeb89(){
  lista->frase = "Ma lisciami le mele LEZZO!!!";
  lista->frase_figlet = "MA LISCIAMI\n LE MELE\n LEZZO!!!";

}
std::string zeb89::meme(int nr_frase) {
  if (std::cout << lista[nr_frase].frase << '\n') {
    return "LOL"; // SUCCESS
  } else {
    return "REKT!!"; // FAILURE
  }
}
std::string zeb89::meme_figlet(int nr_frase) {
  std::string da_stampare = "figlet \"" + lista[nr_frase].frase_figlet + "\"";
  if(system(da_stampare.c_str())) {
    return "REKT!!"; // FAILURE
  }
  return "LOL"; // SUCCESS
}
