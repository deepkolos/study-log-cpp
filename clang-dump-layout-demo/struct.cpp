struct Base {
protected:
  int foo;

public:
  int method(int p) { return foo + p; }
};

struct Point {
  double cx, cy;
};

struct Derived : Base {
public:
  int method(int p) { return foo + bar + p; }

protected:
  int bar, baz;
  Point a_point;
  char c;
};

int main(int argc, char **argv) { return sizeof(Derived); }