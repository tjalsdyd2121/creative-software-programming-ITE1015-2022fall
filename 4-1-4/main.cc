#include <stdio.h>

void getSumDiff(int a, int b, int& sum, int& diff){
	sum = a+b;
	diff = a-b;
		    
}
	

int main(){
	int a,b;
        scanf("%d %d", &a,&b);
		   
	int sum = 0 ;
	int diff = 0;
	int& rs = sum;
	int& rd = diff;
	getSumDiff(a,b,rs,rd);
	printf("sum: %d \ndiff: %d \n", sum , diff);
}
