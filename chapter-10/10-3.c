// More on pointers

#include <stdio.h>

int main (void)
{
	float i1;
	float i2;
	float *p1;
	float *p2;

	i1 = 5;
	p1 = &i1;
	printf("p1 = %f\n", *p1);
	i2 = *p1 / 2 + 10;
	printf("i2 = %f\n", i2);
	p2 = p1;

	printf ("i1 = %f, i2 = %f, *p1 = %f, *p2 = %f\n", i1, i2, *p1, *p2);

	return (0);
}
