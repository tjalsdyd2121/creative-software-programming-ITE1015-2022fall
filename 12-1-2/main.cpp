#include <iostream>
#include <string>
#include "my_container.h"

using namespace std;

int main(){
    int size;

    cin >> size;
    MyContainer<int> intC(size);
    cin >> intC;
    cout << intC;

    cin >> size;
    MyContainer<double> intD(size);
    cin >> intD;
    cout << intD;

    cin >> size;
    MyContainer<string> intS(size);
    cin >> intS;
    cout << intS;
}