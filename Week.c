#include<stdio.h>

enum week{
	sun=63,mon,tue,wed=78,thu,fri,sat
};

void main()
{
	printf("Sunday=%d\n",sun);
	printf("Monday=%d\n",mon);
	printf("Tuesday=%d\n",tue);
	printf("Wednesday=%d\n",wed);
	printf("Thursday=%d\n",thu);
	printf("Friday=%d\n",fri);
	printf("Saturday=%d\n",sat);
}