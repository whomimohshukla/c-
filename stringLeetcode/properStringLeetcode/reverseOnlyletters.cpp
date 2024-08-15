#include<iostream>
using namespace std;

string reverseOnlyString(string str){

    int start=0;
    int end=str.length()-1;
    while(start<end){
        if (isalpha(str[start]) && isalpha(str[end]))
        {
            swap(str[start],str[end]);
            start++;
            end--;

        }
        else if (!isalpha(str[start]))
        {
            start++;
            
        }
        else{
            end--;
        }
        
        
    }
    

    return str;

}

int main(){
    string str="ab-cd";
    string ans=reverseOnlyString(str);
    cout<<ans;
}