#include "player.h"

Player::Player(std::string n, int h, int d) {
  setName(n);
  setHealth(h);
  setDamage(d);
}

void Player::attack(Player* opponent) {
  std::cout << getName() << " attacks " << opponent->getName() << " dealing "
            << getDamage() << " damage.\n";
  opponent->takeDamage(getDamage());
}

void Player::takeDamage(int dmg) {
  setHealth(getHealth() - dmg);
  std::cout << getName() << " takes " << dmg
            << " damage. Remaining health: " << getHealth() << "\n";
}

std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getDamage() const { return damage; }

void Player::setName(std::string n) { name = n; }
void Player::setHealth(int h) { health = h; }
void Player::setDamage(int d) { damage = d; }
