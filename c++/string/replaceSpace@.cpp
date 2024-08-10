#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char name[100] = {"who are you?"};

    int j = strlen(name);
    for (int i = 0; i < j; i++) {
        if (name[i] == ' ') { // Compare with character literal
            name[i] = '@';
        }
    }

    cout << "Modified string: " << name << endl;

    return 0;
}
