#include<iostream>
using namespace std;
string swapString(string str,int start,int end){
  if (start>=end)
  {
    return str ;
  }
  swap(str[start],str[end]);

  return swapString(str,start+1,end-1);

  
  
}
int main(){
    string str="good";
    int start=0;
    int end=str.length()-1;
    string ans=swapString(str,start,end);
    cout<<ans;
    return 0;
}