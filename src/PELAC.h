/*
File: PELAC.h
About: Main header of PELAC calculator. Contains methods for computing.
*/

// Predefine
class Vec3;

// Static; Contains main methods
class PELAC {
  static int add(int other) {}
  static int times(int other) {}
  static void calculate() {}
};

// vector3: x, y, z.
class Vec3 {
  public:
    int x;
    int y;
    int z;
    Vec3(int x, int y, int z) {
      this.x = x;
      this.y = y;
      this.z = y;
    };
    Vec3& operator*=(float scalar) {
      this->x *= scalar;
      this->y *= scalar;
      this->z *= scalar;
    }
};
Vec3 operator*(Vec3 vec, float scalar) {
  return vec *= scalar
}
Vec3 operator*(float scalar, Vec3 vec) {
  return vec *= scalar
}

/**

*/
