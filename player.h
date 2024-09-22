#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
 protected:
  std::string name;
  int health;
  int damage;

 public:
  Player(std::string n, int h, int d);
  virtual ~Player() {}

  void attack(Player* opponent);
  void takeDamage(int dmg);

  std::string getName() const;
  int getHealth() const;
  int getDamage() const;

  void setName(std::string n);
  void setHealth(int h);
  void setDamage(int d);
};

#endif  // PLAYER_H
