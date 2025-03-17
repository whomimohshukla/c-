// timecomplexcity o(n^2);


// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to check whether any pair exists
// // whose sum is equal to the given target value
// bool twoSum(vector<int> &arr, int target) {
//     int n = arr.size();

//     // Iterate through each element in the array
//     for (int i = 0; i < n; i++) {
      
//         // For each element arr[i], check every
//         // other element arr[j] that comes after it
//         for (int j = i + 1; j < n; j++) {
          
//             // Check if the sum of the current pair
//             // equals the target
//             if (arr[i] + arr[j] == target) {
//                 return true;
//             }
//         }
//     }
  
//     // If no pair is found after checking
//     // all possibilities
//     return false;
// }

// int main() {
  
//     vector<int> arr = {0, -1, 2, -3, 1};
//     int target = -2;

//     // Call the twoSum function and print the result
//     if(twoSum(arr, target))
//       cout << "true";
//     else
//       cout << "false";

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include<algorithm>
// using namespace std;

// Function to check whether any pair exists
// whose sum is equal to the given target value

// tc -o(nlogn)
// bool twoSum(vector<int> &arr, int target) {
// // Sort the array
//     sort(arr.begin(), arr.end());
//     int start=0;
//     int end=arr.size()-1;

//     while(start<end){
//         int sum=arr[start]+arr[end];
//         if(sum==target){
//             return true;
//         }
//         else if(sum>target){
//             end--;
//         }
//         else{
//             start++;
//         }
//     }

//    return false;
// }

// // int main() {
  
// //     vector<int> arr = {0, -1, 2, -3, 1};
// //     int target = -2;

// //     // Call the twoSum function and print the result
// //     if(twoSum(arr, target))
// //       cout << "true" <<endl;
// //     else
// //       cout << "false";

// //     return 0;
// // }


// best solution for 2sum


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to check whether any pair exists
// whose sum is equal to the given target value
bool twoSum(vector<int> &arr, int target) {

     // Create an unordered_set to store the elements
    unordered_set<int> s;

    for(int i=0;i<arr.size();i++){
        int complement=target-arr[i];

        if(s.find(complement)!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
   
   
    return false;
}

int main() {
  
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;

    // Call the twoSum function and print the result
    if(twoSum(arr, target))
      cout << "true";
    else
      cout << "false";

    return 0;
}
