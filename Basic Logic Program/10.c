#include <stdio.h>
int main()
//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
//(w = width, h = height, l = length)
{
	float A,w,l,h;
	
	printf("Enter the value of w=");
	scanf("\n%f",&w);
	
	printf("Enter the value of l=");
	scanf("\n%f",&l);
	
	printf("Enter the value of h=");
	scanf("\n%f",&h); 
	
	A = 2*(w*l)+2*(h*l)+2*(h*w);	
	printf("The area of a Rectangular prism is = %f", A);
	
	return 0;
	
}
