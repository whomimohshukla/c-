#include<iostream>
using namespace std;

void kmToMiles(int km){
    int miles = km * 0.621371;
    cout << "The distance in miles is: " << miles << endl;
    

}

   
    


int main(){
    int km;
    cout<<"enter a distance (in Km):";
    
    cin>>km;
    kmToMiles(km);


    
    
    return 0;
}

