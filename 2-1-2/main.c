#include <stdio.h>
typedef struct{
		int xpos;
  		int ypos;
}Point;

Point getScale2xPoint(const Point* p){
	Point temp_p;
	temp_p.xpos = 2*(p->xpos);
	temp_p.ypos = 2*(p->ypos);
	return temp_p;
}

void swapPoints(Point* p1, Point* p2){
	Point temp_p;
	temp_p.xpos = p1->xpos;
	temp_p.ypos = p1->ypos;
	p1->xpos = p2->xpos;
	p1->ypos = p2->ypos;
	p2->xpos = temp_p.xpos;
	p2->ypos = temp_p.ypos;

}

int main(void){
	Point p1;
	scanf("%d %d", &p1.xpos, &p1.ypos);
	printf("Calling getScale2xPoint()\n");
	Point p2 = getScale2xPoint(&p1);
	printf("p1 : %d %d \n", p1.xpos,p1.ypos);
	printf("p1 : %d %d \n", p2.xpos,p2.ypos);
	printf("Calling swapPoints() \n");
	swapPoints(&p1,&p2);
	printf("p1 : %d %d \n", p1.xpos,p1.ypos);
	printf("p1 : %d %d \n", p2.xpos,p2.ypos);

}
