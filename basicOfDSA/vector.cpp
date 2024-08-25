#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr;
    // int ans=sizeof (arr)/sizeof (int);
    // cout <<ans;
    // cout <<arr.size();
    // cout <<arr.capacity();
//     arr.push_back(1);
//     arr.push_back(2);
//     arr.push_back(3);
//     arr.push_back(4);
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout <<endl;
// arr.pop_back();
// arr.pop_back();
//  for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }

// vector <int> brr(10);
// cout << brr.size() << endl;
// cout << brr.capacity() << endl;


// for (int i = 0; i < brr.size(); i++)
// {
//     cout << brr[i] << " ";
// }

int n;
cout<<"enter a number:";
cin>>n;

vector <int> array(n,111);

for (int i = 0; i <array.size(); i++)
{
    cout << array[i] << " ";
}
cout<<endl;

vector <int> array3{1,2,3,4,5,6};

for (int i = 0; i <array3.size(); i++)
{
    cout << array3[i] << " ";
}






}