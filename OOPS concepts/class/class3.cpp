#include<iostream>  
using namespace std;

// Defining a class named 'animal'
class animal {
    private:
        int weight;  // Private attribute to store the weight

    public:
        string name;  // Public attribute to store the animal's name
        int age;      // Public attribute to store the animal's age

        // Method representing the animal's behavior: 'eat'
        void eat() {
            cout << name << " is eating" << endl;
        }

        // Method representing the animal's behavior: 'sleep'
        void sleep() {
            cout << name << " is sleeping" << endl;
        }

        // Getter for the private 'weight' attribute
        int getWeight() {
            return weight;
        }

        // Setter for the private 'weight' attribute
        void setWeight(int w) {
            weight = w;
        }

        // Constructor
        animal() {
            cout << "Constructor called" << endl;
        }

        // Destructor (optional, useful for dynamic allocation cleanup)
        ~animal() {
            cout << "Destructor called for " << name << endl;
        }
};

int main() {
    // Object creation using dynamic memory allocation
    animal *lion = new animal();  // Dynamic allocation using `new`
    
    // Setting public attributes and calling methods on the dynamically allocated object
    lion->name = "Simba";  // Setting the name of the lion
    lion->age = 5;         // Setting the age of the lion
    
    lion->eat();           // Simba is eating
    lion->sleep();         // Simba is sleeping
    
    lion->setWeight(200);  // Setting the lion's weight
    cout << "Weight of " << lion->name << " is: " << lion->getWeight() << " kg" << endl;

    // Freeing the dynamically allocated memory
    delete lion;

    return 0;  // End of program
}

