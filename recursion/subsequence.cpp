#include<iostream>
#include<algorithm>
using namespace std;
void printSubsequence(string str,string output , int index){
    if (index>=str.length())
    {
        cout<<output<<endl;
        return;
    }

    // exclude
    printSubsequence(str,output,index+1);

    //include

    output.push_back(str[index]);
    printSubsequence(str,output,index+1);
    
    
};
using namespace std;
int main(){
    string str="abc";
    string output="";
    int index=0;
    printSubsequence(str,output,index);
    return 0;
}