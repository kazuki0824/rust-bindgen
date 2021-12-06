// bindgen-flags: --dynamic-loading TestLib

class Base {
  int _x;

 public:
  Base(int x);

  void some_function();
  virtual void some_other_function();
};

class Derived final : public Base {
  int _y;
  
 public:
  Derived(int x);

  void some_function();
  void some_other_function();
};
