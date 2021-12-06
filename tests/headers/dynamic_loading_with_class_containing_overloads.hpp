// bindgen-flags: --std=c++11 --dynamic-loading TestLib

int foo(void *x);
float foo(float x);

class Base {

 public:
  Base(int x);

  void some_function();
  void some_function(int);
  virtual void some_other_function();
};

class Derived final : public Base {

 public:
  Derived(int x, float y);
  void some_other_function() override;
};

void bar();
