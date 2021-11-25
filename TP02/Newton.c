#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float d(float x)
{
	return 2*x;
}

float f(float x)
{
	return pow(x,2)-2;
}

float Newton(float(*f)(float),float(*d)(float),float a0,int n)
{
	float m;
	int i;
	for (i=0;i<n+1;i++)
	{
		m=a0-(f(a0)/d(a0));
		a0=m;
	}
	return m;
}

int main()
{
	float c;
	c=Newton(f,d,3,3);
	printf("%f",c);
}
