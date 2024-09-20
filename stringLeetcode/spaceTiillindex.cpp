#include <iostream>
using namespace std;
int indexoflastWord(string s) {
  int end = s.length() - 1;
  while (end >= 0 && s[end] == ' ') {
    end--;
  }
  int start = end;
  while (start >= 0 && s[start] != ' ') {
    start--;
  }
  return end - start;
}
int main() {
  string s = "hello world";
  int index = indexoflastWord(s);
  cout << index << endl;
  return 0;
}