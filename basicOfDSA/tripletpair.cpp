
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>arr{10,20,30,40,50,60};
    int sum=70;
    for (int i = 0; i <arr.size(); i++)
    {
        int element1=arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            int element2=arr[j];
            for (int k = 0; k < arr.size(); k++)
            {
                int element3=arr[k];
                if (element1+element2+element3==sum)
                {
                   cout<<"The triplet is "<<element1<<","<<element2<<","<<element3<<endl;
                }
                
            }
            
           
  
        }
        
    }

}

    