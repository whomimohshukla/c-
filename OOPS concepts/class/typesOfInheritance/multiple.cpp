#include<iostream>
using namespace std;

class A{
    public:
    int physics;
};
class B{
    public:
    int chemistry;

};
class C:public A,public B{
    public:
    int maths;
};
int main(){
    C obj;
    obj.physics = 90;
    obj.chemistry = 80;
    obj.maths = 70;
    cout<<"Physics Marks: "<<obj.physics<<endl;
    return 0;
}