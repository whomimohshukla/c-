#include<iostream>  
using namespace std;

// Defining a class named 'animal'
class animal {
    // Private members (can only be accessed from within the class)
    private:
        int weight;  // A private attribute to store the weight of the animal

    // Public members (accessible from outside the class)
    public:
        string name;  // A public attribute to store the animal's name
        int age;      // A public attribute to store the animal's age

        // A method representing the animal's behavior: 'eat'
        void eat() {
            cout << "eating" << endl;
        }

        // Another method representing the animal's behavior: 'sleep'
        void sleep() {
            cout << "sleeping" << endl;
        }

        // A getter function to access the private 'weight' attribute
        int getWeight() {
            return weight;
        }

        // A setter function to set the private 'weight' attribute
        void setWeight(int w) {
            weight = w;
        }

        // constructor
        animal(){
            cout<<"constructor called";
        }
};

int main() {
    // // Object creation of the class 'animal'
    // animal dog;  // An object 'dog' of type 'animal' is created

    // // Setting public attributes 'name' and 'age' of the object 'dog'
    // dog.name = "Bella";  // Setting the name of the dog to "Bella"
    // dog.age = 3;         // Setting the age of the dog to 3

    // // Outputting the dog's attributes
    // cout << "age of dog is: " << dog.age << endl;      // Printing the dog's age
    // cout << "name of dog is: " << dog.name << endl;    // Printing the dog's name

    // // Calling public methods 'sleep' and 'eat' on the object 'dog'
    // dog.sleep();  // Dog is sleeping (method call)
    // dog.eat();    // Dog is eating (method call)

    // // Setting and retrieving the dog's weight using the setter and getter methods
    // dog.setWeight(10);   // Setting the dog's weight to 10
    // cout << "weight of dog is: " << dog.getWeight() << endl;  // Printing the dog's weight


    // // dynamic memory allocation
    // animal *lion=new animal;
    
    // lion->name="Simba";


    return 0;  // End of program
}
