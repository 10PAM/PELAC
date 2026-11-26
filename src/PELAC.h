// File: PELAC.h
// About: Main header of PELAC calculator. Contains methods for computing.
// Lead Programmers: Mario Aguilera Piceno

// Predefine
class Vec3;

// Static; Contains main methods
class PELAC {
  static int add(int other) {}
  static int times(int other) {}
  static void calculate() {}

  // Call: Pelac.Exp(1, 3);
  static int Exp(int p_number, int p_base) {
    for (int i = 0; i < p_base - 1; ++i) {
      p_number *= p_base;
    }
    return p_number;
  }
};

// Vector3D
class Vec3 {
  public:
    int x;
    int y;
    int z;
    Vec3(int x, int y, int z) {
      this->x = x;
      this->y = y;
      this->z = y;
    };
    ~Vec3() {}
    Vec3& operator*=(float scalar) {
      this->x *= scalar;
      this->y *= scalar;
      this->z *= scalar;
    }
    int dot() {}
};

// Scaling Vec3: Vec3*=scaler;
Vec3 operator*(Vec3 vec, float scalar) {
  return vec *= scalar;
}

// Scaling Vec3: scalar*=Vec3;
Vec3 operator*(float scalar, Vec3 vec) {
  return vec *= scalar;
}

// Construct a General Vector
class Vec {
  public:
    //int vecArr[] = toArray();
    Vec(int vecA[]) { 
    }
};
