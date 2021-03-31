#include<stdio.h>

int main()

{
    
	float length, width, area, perimeter;
	printf("\nenter the length:");
	scanf("%f", &length);
	printf("\nenter the width:");
	scanf("%f", &width);
	area = length * width;
	perimeter = 2 * (length + width);
	printf("\narea = %f", area);
	printf("\nperimeter = %f", perimeter);
	
	return 0;
	
}