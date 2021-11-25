#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x)
{
	return pow(x,2)-2;
}

float Dichotomie(float(*f)(float),float a,float b,int n) 
{
	float m;
	int i;
	while (i<n+1)
	{
		m=(a+b)/2;
		if (f(a)*f(m)<0)
		{
			b=m;
			i++;
		}
		else
		{
			a=m;
			i++;
		}
	}
	return m;
}

int main()
{
	float a;
	a=Dichotomie(f,1,3,3);
	printf("%f",a);
}
