#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<vector<int> >array;

    // vector<int>a{1,2,3};
    // vector<int>b{1,2,3};
    // vector<int>c{1,2,3};

    // array.push_back(a);
    // array.push_back(b);
    // array.push_back(c);

    // +++++++++++++++++++++++++++++++++ 

    int rows=5;
    int col=5;

    vector<vector<int> >array(rows,vector<int>(col,-8));

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[0].size(); j++)
        {
            cout << array[i][j] << " ";
        }
        cout <<endl;

    }
    





    
}