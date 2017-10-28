#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include "zeb89.h"

zeb89::zeb89(){
  lista[0].frase = "Ma lisciami le mele LEZZO!!!";
  lista[0].frase_figlet = "MA LISCIAMI\nLE MELE\nLEZZO!!!";
  lista[1].frase = "Nulla si crea, nulla si distrugge, tutto è LEZZO!!";
  lista[1].frase_figlet = "Nulla si crea\nNulla si distrugge\nTutto e' LEZZO!!";
  lista[2].frase = "Guarda che faccia, non se la spettava!";
  
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
