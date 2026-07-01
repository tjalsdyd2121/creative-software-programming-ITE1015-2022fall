#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n ;

	int* arr = new int[n];

	for(int q = 0 ; q < n; q++){
		cin >> arr[q];
	}

	int max = arr[0];
	int min = arr[0];

	for(int w = 0 ; w < n ; w++){
		if(arr[w] >= max){
			max = arr[w];
		}
		if(arr[w] <= min){
			min = arr[w];
		}
	}

	cout << "min: " << min << "\n";
	cout << "max: " << max << "\n";

	delete[] arr;
}
