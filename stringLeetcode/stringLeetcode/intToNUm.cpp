#include<iostream>
#include<vector>
using namespace std;
string intToNum(int num){

   string romanSymbols[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
   string ans="";
   for (int i = 0; i <=13; i++)
   {
      while (num>values[i])
      {
        ans+=romanSymbols[i];
        num-=values[i];
      }
      
   }
   return ans;
}

int main(){
    int num=58;

    string ans=intToNum(num);
    cout<<ans<<endl;

}