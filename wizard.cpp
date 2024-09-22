#include "wizard.h"

Wizard::Wizard(std::string n, int h, int d, int m) : Player(n, h, d) {
  setMana(m);
}

void Wizard::castSpell(Player* opponent) {
  std::cout << getName() << " casts a spell on " << opponent->getName()
            << " for " << getMana() << " damage.\n";
  opponent->takeDamage(getMana());
}

int Wizard::getMana() const { return mana; }
void Wizard::setMana(int m) { mana = m; }
