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

float Newton(f,d,float a0,int n)
{
	float m;
	int i;
	for (i=0;i<n+1;i++)
	{
		m=a0-(f(a0)/d(a0));
		return Newton(f,d,m,n);
	}
	return m;
}

int main()
{
	float c;
	c=Newton(f,d,3,3);
	printf("%f",c);
}
