#include <iostream>
#include <vector>

using namespace std;

int duplicate(vector<int>arr){
    while (arr[0]!=arr[arr[0]])
    {
        swap(arr[0],arr[arr[arr[0]]]);
    }
    return arr[0];
    

}

int main() {

    vector<int>arr{1,2,2,3,4,5};

    int ans=duplicate(arr);
    cout<<ans;
 
    return 0;
}
