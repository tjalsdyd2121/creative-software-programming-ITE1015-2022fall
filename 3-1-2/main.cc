#include <iostream>
#include <string>
using namespace std;

int main(){

	string s1,s2,con_s;
	cin >> s1;
	cin >> s2;
	con_s = s1 + s2;
			    
	cout << con_s << "\n";
	cout << s1[0] << "\n";
	cout << s2[s2.length()-1] << "\n";
				        				  
	return 0;
}
