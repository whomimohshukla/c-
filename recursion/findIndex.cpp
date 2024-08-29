#include<iostream>
using namespace std;
bool findThechar(string name,int index,char key){
    int n=name.length();
    if(index>=n){
        return false;
    }
    if (name[index]==key)
    {
       return true;
    }
    return findThechar(name,index+1,key);
    
    
}
int main(){
    string name="mimohshukla";
    int index=0;
    char key='p';
    bool ans= findThechar(name,index,key);
    if(ans){
        cout<<"character found"<<endl;
    }
    else{
        cout<<"character not found"<<endl;
    }

    return 0;
}