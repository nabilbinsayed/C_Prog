#include <stdio.h>
int main()
{
	float x, y;
	 

	printf("Enter x and y co-ordinates: ");
	scanf("%f %f", &x, &y);

	if (x>=0 && y>=0) {
    	printf("It's in first quadrant\n");
	}
	else if (x>=0 && y<0) {
    	printf("It's in fourth quadrant\n");
	}
	else if (x<0 && y>=0) {
    	printf("It's in second quadrant\n");
	}
	else if (x<0 && y<0) {
    	printf("It's in third quadrant\n");

	}

	return 0;
}
