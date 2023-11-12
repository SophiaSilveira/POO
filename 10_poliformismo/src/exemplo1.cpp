class A {
public:
  void foo1();
};

class B : public A {
public:
  void foo2();
};

int main(){
  A a, *pa;
  B b, *pb;

  a = b;     // copia a parte A de b para a
  b = a;     // ERRO!
  pa = &a;   // ok
  pa = &b;   // ok, pa aponta para objeto tipo B
  pa = pb;   // ok
  pb = &a;   // ERRO!
  pb = &b;   // ok
  pb = pa;   // ERRO!

  return 0;
}

