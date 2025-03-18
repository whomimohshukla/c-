#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Animal{
    //state or properties
   private:
     int weight;
    public:
    int age;
    string name;

    string type;
     /// construcotr

     Animal(){

        this->weight=0;
        this->age=0;
        cout<<"Constructor called"<<endl;
     }

     //parameterized constructor

     Animal(int age){
        this->age=age;
        cout<<"Parameterised Constructor called"<<endl;
     }

     //copy constructor
    //  Animal (Animal obj){
    //     this
    //  }

    //behaviour

    void eat(){
        cout<<"Eating"<<endl;

    }

    void sleep(){
  cout<<"Sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight=w;
    }
};
int main()
{

    // oject creation 
    //static 

    // Animal ramesh;

    // ramesh.age=12;
    // ramesh.name="Lion";

    // cout<<"Age of ramesh is :"<<ramesh.age<<endl;
    // cout<<"Name of ramesh is:"<<ramesh.name<<endl;


    // // get elements from private class
    // ramesh.setWeight(101);

    // cout<<"Weight"<<ramesh.getWeight()<<endl;

    // dynamicially

    // Animal*suresh=new Animal;

    // (*suresh).age=15;
    // (*suresh).type="biillii";
    

    //alternate method

    // suresh->age=17;
    // suresh->type="babay";

    // suresh->eat();
    // suresh->sleep();
    

    // construcotr called 

    Animal a(10);
    Animal*b=new Animal(100);



}