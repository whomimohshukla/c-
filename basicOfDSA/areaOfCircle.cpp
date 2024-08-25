#include<iostream>
using namespace std;

int areaOfcircle(int radius){

    int area;
    area = 3.14*radius*radius;
    return area;


}

int main(){
    int radius;
    cout <<"Enter a radius :";
    cin >> radius;
    cout << "the area of circle is :" << areaOfcircle(radius) << endl;

}