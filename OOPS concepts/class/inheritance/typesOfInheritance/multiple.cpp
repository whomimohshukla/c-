#include<iostream>
using namespace std;

class A{
    public:
    int chemistry=404;
};
class B{
    public:
    int chemistry=30;

};
class C:public A,public B{
    public:
    int maths;
};
int main(){
    C obj;
    cout<<obj.A::chemistry<<" "<<obj.B::chemistry<<" "<<obj.maths<<endl;
    return 0;
}