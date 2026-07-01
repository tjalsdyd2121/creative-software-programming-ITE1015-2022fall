#include<iostream>
#include "shapes.h"

Circle::Circle(double x_cord, double y_cord, double rad)
{
	    center_x= x_cord;
	        center_y= y_cord;
		    radius =rad;
}
double Circle::Circle_Area()
{
	    return radius*radius*(3.14);
}
double Circle::Circle_peri()
{
	    return 2*(3.14)*radius;
}
Rectengular::Rectengular(int tlx, int tly, int brx, int bry)
{
	    topleft_x = tlx;
	        topleft_y = tly;
		    botright_x = brx;
		        botright_y = bry;
}

int Rectengular::Rectengular_Area()
{
	    return (topleft_x-botright_x)*-((topleft_y-botright_y));
}

int Rectengular:: Rectengular_peri()
{
	    return 2*((-(topleft_x-botright_x))+((topleft_y-botright_y)));
}

