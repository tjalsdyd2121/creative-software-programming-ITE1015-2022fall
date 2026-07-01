#include <iostream>

using namespace std;

bool sorted = false;
int n;

void myswap(int& a , int& b){
	int temp = a ; 
	a = b ;
	b = temp;
}

void mysort(int arr1[]){
	while (!sorted){   
	
		int check = 0;
		for(int e = 0 ; e < n-1 ; e++){
			if(arr1[e] > arr1[e+1]){	
				check++;
				myswap(arr1[e],arr1[e+1]);
			}
		}
		if(check == 0) sorted = true;
	}
}

int main(){
	int flag = 0 ; 
	cin >> n ;
	if(n <=0 ) flag = 1 ;
		      
       	if(flag ==0 ){

	
		int* arr = new int[n];
		for(int q = 0 ; q < n ; q++){
			cin >> arr[q]; 
		}

	
		mysort(arr);

		for(int r= 0 ; r < n ; r++){
			cout << arr[r] << " ";
		}

	
		delete[] arr;
	}
}
