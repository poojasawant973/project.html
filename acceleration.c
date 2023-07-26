// acceleration due to gravity

#include <stdio.h>
int main()
{
	int t, gravity;
	printf("Enter the time period simple pendulum");
	scanf("%d", &t);
	int l;
	printf("Enter the effective length of simple pendulum");
	scanf("%d", &l);
	gravity = (4 *(3.14*3.14)*l)/(t * t);
	printf("Acceleration of gravity is:%d", gravity);
	return 0;
}
	
	
