#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n ;

	int* np = new int[n];
	

	for(int q = 0 ; q < n ; q++){
		np[q] = q;
	}
	for(int w = 0 ; w < n ; w++){
		cout <<  np[w] << " ";
	
	}

	delete []  np;
}
