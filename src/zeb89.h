#ifndef ZEB89_H
#define ZEB89_H
#include <string>
class zeb89 {
public:
  zeb89();
  std::string meme(int nr_frase);
  std::string meme_figlet(int nr_frase);
private:
  struct FRASI {
    std::string frase;
    std::string frase_figlet;
  };
  FRASI *lista = new FRASI[3];
};
#endif // ZEB89_H
