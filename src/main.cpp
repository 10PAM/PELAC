// Copyright 2026 - Piceno LLC.
// Lead Programmers {
//  Mario Aguilera Piceno
// }

#include <iostream>
#include <PELAC.h>

int main() {
  Vec3 vector(1, 2, 3);
  vector *= 9.0f;

  std::cout << "Vec3: " << vector.x << ", " << vector.y << ", " << vector.z << std::endl;
}
