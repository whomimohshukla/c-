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

    Animal*suresh=new Animal;

    // (*suresh).age=15;
    // (*suresh).type="biillii";
    

    //alternate method

    suresh->age=17;
    suresh->type="babay";

    suresh->eat();
    suresh->sleep();



}