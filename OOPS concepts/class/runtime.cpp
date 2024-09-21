#include <iostream>
using namespace std;
class Animal {
public:
  virtual void speak() { cout << "speaking"; }
};
class Dog : public Animal {
public:
  // over ride
  void speak() { cout << "Woof Woof"; }
};

int main() {
  // Dog d;
  // d.speak(); // Woof Woof
  //   Animal a;
  //   a.speak(); // speaking
  //   Animal *a = new Animal();
  //   a->speak(); // speaking
  //   Dog *d = new Dog();
  //   d->speak(); // Woof Woof

//   Animal *a = new Dog();
//   a->speak(); // speaking >>>upcasting and virtual keyword if you want to define it at run time 

// Dog *a=new Animal(); // this will not run it will depends on compiler in some of compiler will do work
// a->speak(); // speaking >>>> downcasting and virtual keyword if you want to define it

  return 0;
}