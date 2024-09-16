#include <stdio.h>
//3. WAP to Find Area And Circumference of Circle
int main()
{
	float pi = 3.14,Circumference=0 ,area=0 ;
	int r ;
	printf("Enter any number:");
	scanf("%d",&r);
	
	Circumference = 2*pi*r;
	area= pi*r*r;
	
	printf("\nArea of circle is = %.2f",area);
	printf("\nCircumference of circle is = %.2f", Circumference);
	
	return 0;
}



