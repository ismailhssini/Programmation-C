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
	printf("%f \n",Dichotomie(f,0,3,3));
	printf("%f \n",Dichotomie(f,0,3,10));
	printf("%f \n",Dichotomie(f,0,3,30));
	printf("%f \n",Newton(f,d,3,3));
	printf("%f \n",Newton(f,d,3,3));
	printf("%f \n",Newton(f,d,3,10));
}
