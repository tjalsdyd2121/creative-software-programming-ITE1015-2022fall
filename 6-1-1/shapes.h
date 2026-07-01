
class Circle
{
	private:
		    double center_x;
		        double center_y;
			    double radius;
	public:
			        Circle(double x_cord, double y_cord, double rad);
				    double Circle_Area();
				        double Circle_peri();
};

class Rectengular
{
	private:
		    int topleft_x;
		        int topleft_y;
			    int botright_x;
			        int botright_y;
	public:
				    Rectengular(int tlx, int tly, int brx, int bry);
				        int Rectengular_Area();
					    int Rectengular_peri();
};
