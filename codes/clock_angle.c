#include <stdio.h>

int calculate_angle(int hr, int min)
{
	float angle = (30*hr - 5.5*min);

	return angle;


}

int main()
{
	int h, m;
	float angle;
	printf("enter Hr and min \n");
	scanf("%d %d", &h, &m);
	angle = calculate_angle(h, m);
	
	printf("angle between h and m is %.2f ", angle);

	return 0;
}
