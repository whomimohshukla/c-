#include<iostream>
using namespace std;
class animal{
    private:
    int age;
    int weight;
    public:
    void eating(){
        cout<<"eating"<<endl;
    }
    // geter 
    int getage(){
        return this-> age;
    }
    // seter
    void setage(int a){
        this->age=a;
    }


};
int main(){
    return 0;
}