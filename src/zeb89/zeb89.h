#ifndef ZEB89_H
#define ZEB89_Hs
#include <string>
/*== Define the number for the array of struct FRASI ==*/
#define FRASI_ZEB 3

class zeb89 {
public:
  zeb89(); // Constructor //
  std::string meme(int nr_frase); // Print a "meme" //
  std::string meme_figlet(int nr_frase); // Print a "meme" using figlet (https://github.com/cmatsuoka/figlet) //

private:
  /*== Struct for memes ==*/
  struct FRASI {
    std::string frase;
    std::string frase_figlet;
  };
  FRASI *lista = new FRASI[FRASI_ZEB];
};

#endif // ZEB89_H
