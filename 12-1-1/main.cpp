#include <iostream>
#include <string>

using namespace std;

template<typename T>
void myswap(T& a, T& b){
    T temp = b;
    b = a ; a = temp;
}

int main(){
    int ai,bi;
    double ad,bd;
    string as,bs;

    cin >> ai >> bi;
    myswap(ai,bi);
    cout << "After calling myswap() : "<<ai <<" "<< bi;
    
    cin >> ad >> bd;
    myswap(ad,bd);
    cout << "After calling myswap() : "<< ad << " "<< bd;

    cin >> as >> bs;
    myswap(as,bs);
    cout << "After calling myswap() : "<<as << " "<< bs;
}