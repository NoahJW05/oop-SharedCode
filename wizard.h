#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
 private:
  int mana;

 public:
  Wizard(std::string n, int h, int d, int m);

  void castSpell(Player* opponent);

  int getMana() const;
  void setMana(int m);
};

#endif  // WIZARD_H
