#include <iostream>
#include <string>
using namespace std;

int add(int a , int b){
	return a+b;
}
string add(string a, string b){
	return a+"-"+b;
}

int main(){

	string s1,s2;
	int i1,i2;
	cin >> i1;
	cin >> i2;
	cin >> s1;
	cin >> s2;

				    
	cout << add(i1,i2) << "\n";
	cout << add(s1,s2) << "\n";	
	return 0;
}
