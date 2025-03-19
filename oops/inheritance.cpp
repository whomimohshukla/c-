#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Animal{

    public:
   int age;
   string name;
   void Eating(){
    cout<<"Animal is eating"<<endl;
   }
};

class Dog :public Animal{


};
int main()
{
    Dog a;
    a.Eating();
 
}