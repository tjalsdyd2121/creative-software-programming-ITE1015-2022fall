#include <stdio.h>

struct Person
{
	    char name[11];
	    int age;
};

int main(){
	    struct Person list[3];
	    for(int q = 0 ; q < 3 ; q++) scanf("%s %d", list[q].name, &list[q].age);
	    for(int w = 0 ; w < 3 ; w++) printf("Name : %s, Age : %d \n",list[w].name, list[w].age);
	    return 0;
}

