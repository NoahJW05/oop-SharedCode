#include "warrior.h"

Warrior::Warrior(std::string n, int h, int d, std::string w) : Player(n, h, d) {
  setWeapon(w);
}

void Warrior::swingWeapon(Player* opponent) {
  std::cout << getName() << " swings their " << getWeapon() << " at "
            << opponent->getName() << " for " << getDamage() << " damage.\n";
  opponent->takeDamage(getDamage());
}

std::string Warrior::getWeapon() const { return weapon; }
void Warrior::setWeapon(std::string w) { weapon = w; }
