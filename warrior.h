#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

class Warrior : public Player {
 private:
  std::string weapon;

 public:
  Warrior(std::string n, int h, int d, std::string w);

  void swingWeapon(Player* opponent);

  std::string getWeapon() const;
  void setWeapon(std::string w);
};

#endif  // WARRIOR_H
