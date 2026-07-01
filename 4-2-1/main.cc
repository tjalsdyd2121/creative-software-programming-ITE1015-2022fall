#include <iostream>
#include <string>
using namespace std;

struct Person
{
	int age;
	string name;
};

int main(){
	int n ; 
	cin >> n ;

	Person* arr = new Person[n];

	for(int q = 0 ; q < n ; q++){
		cin >> arr[q].name ; 
		cin >> arr[q].age ; 
						        
	}
	for(int w = 0  ; w < n ; w++){
		cout << "Name :" << arr[w].name << ", ";
		cout << "Age: " << arr[w].age << "\n";
	}                       
	delete[] arr;	
}
