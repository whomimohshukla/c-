// #include<iostream>
// using namespace std;
// class cars{
// };
// int main(){
//     cout<<sizeof(cars); >>>>>>>>>>>>>output 1
//     return 0;
// }

#include <iostream>
using namespace std;
class cars {
  int milage;
  int diesel;
  char parts; //>>...this is due to padding and  greedy alignment output >>12;
};
int main() {
  cout << sizeof(cars);
  return 0;
}
