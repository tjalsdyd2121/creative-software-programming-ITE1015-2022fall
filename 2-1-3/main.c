#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc){
	int at,bt,ct; 
	at = *pa;
	bt = *pb;
	ct = *pc;
						
						
	*pa = bt;
	*pb = ct;
	*pc = at;
}

void rotateRight(int* pa, int* pb, int* pc){
	int at,bt,ct; 
	at = *pa;
	bt = *pb;
	ct = *pc;
						
						
	*pa = ct;
	*pb = at;
	*pc = bt;
}

int main(void){
	int a =10;
	int b = 20;
	int c =30;
	int n;
	printf("%d:%d:%d\n",a,b,c);
	while (1){
		scanf("%d",&n);
		if(n == 1 || n == 2){
			if(n == 1){
				rotateLeft(&a,&b,&c);										                        printf("%d:%d:%d\n",a,b,c);		
			}	
			else{
				rotateRight(&a,&b,&c);
				printf("%d:%d:%d\n",a,b,c);
			}
		}
		else{
			break;
		}
	}
							
}

