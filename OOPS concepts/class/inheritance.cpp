#include <iostream>
using namespace std;

// Base class: animal
class animal {
public:
    int age;    // Attribute to store the age of the animal
    int weight; // Attribute to store the weight of the animal

    // Method to represent the animal eating
    void eating() {
        cout << "Eating" << endl;
    }
};

// Derived class: Dog, which inherits from the base class animal
class Dog : public animal {
public:
    // Method specific to Dog class that represents barking
    void bark() {
        cout << "Barking" << endl;
    }
};

int main() {
    // Creating an object 'd' of the Dog class
    Dog d;

    // Using the inherited method eating() from the animal class
    d.eating(); // Output: Eating

    // Using the bark() method defined in the Dog class
    d.bark();   // Output: Barking

    return 0; // End of the program
}
