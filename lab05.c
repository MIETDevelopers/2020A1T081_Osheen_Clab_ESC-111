

#include<stdio.h>

int main()

{
	float radius, area, circumference;
	printf("\nenter the radius:");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	circumference = 2 * 3.14 * radius;
	printf("\narea = %f", area);
	printf("\ncircumference = %f", circumference);
	
	return 0;
	
}
