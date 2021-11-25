#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float f(float x)
{
	return pow(x,2)-2;
}

float dichotomie2(float(*f)(float),float a,float b,float e)
{
	float m ;
	while (b-a>e)
	{
		m=(a+b)/2;
		if (f(a)*f(m)<0)
		{
			b=m;
		}
		else
		{
			a=m;
		}
	}
	return m;
}


int main()
{
	float b;
	b=dichotomie2(f,1,3,0.001);
	printf("%f",b);
}
