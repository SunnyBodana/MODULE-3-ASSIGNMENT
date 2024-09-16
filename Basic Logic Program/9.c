#include <stdio.h>
int main()
//9. Find circumference of Triangle formula : triangle = a + b + c
{
	float a,b,c,triangle;
	
	printf("Enter the value of a=");
	scanf("\n%f",&a);
	
	printf("Enter the value of b=");
	scanf("\n%f",&b);
	
	printf("Enter the value of c=");
	scanf("\n%f",&c);
	
	triangle = a+b+c;
	
	printf("Circumfrence of Triangle is = %f", triangle);
	
	return 0;
}
