#include<iostream>
#include<vector>

using namespace std;
void waveMatrixPrint(vector<vector<int>>arr){
    int m=arr.size();
    // cout<<1%2;
    int n=arr[0].size();

   
    cout<<n;
    for (int startCol = 0; startCol < n; startCol++)
    {
        if (startCol % 2 == 0){
            for (int i = 0; i < m; i++){
                // cout << arr[i][startCol] << " ";
            }


        }
        else{
            for (int i = m - 1; i >= 0; i--){
                // cout << arr[i][startCol] << " ";
            }
    }
    }
    
}



int main() {
    vector <vector<int> >arr{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    waveMatrixPrint(arr);



}
