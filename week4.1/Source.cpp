#include<stdio.h>
int main()
{
	float p, r,a;
	printf("Find area of circle");
	printf("\nEnter your radius :");
	scanf_s("%f", &r);
	p = 3.14;
	a = p * (r * r);
	printf("%.2f", a);
	return 0;
}