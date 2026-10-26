/*
  
*/

#include <iostream>
#include <PELAC>

int main() {
  Vec3 vector = new Vec3(1, 2, 3);
  vector *= 1.0f;

  std::cout << vector << std::endl;
}
