#include <stdio.h>
int main()
//6. Find area of Triangle Formula : A = 1/2 × b × h 
// (b=base,h=height)
{
	float A,b,h ;
	
	printf("Enter the value of b=");
	scanf("\n%f",&b);
	
	printf("Enter the value of h=");
	scanf("\n%f",&h);
	
	A = b*h/2;
	
	printf("\nArea of Triangle is = %f",A);
	
	return 0;
	
}
