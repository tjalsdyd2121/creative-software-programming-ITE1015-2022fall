#include <iostream>

using namespace std;
class A{
    int q=1;
    friend void a();
};

void a(){
    q++;
}

int main(){
    A AA;
    AA.a();
}