#include <stdio.h>
#include <stdlib.h>

float f(float x)
{
	return (2*x)+1;
}


float Polylagrange(float *T,float x,int i)
{
	float m=1;
	int j=0;
	while (j<sizeof(T))
	{
		j++;
		if (i!=j)
		{
			m=m*((x-T[j])/(T[i]-T[j]));
		}
	}
	return m;
}

float Interplagrange(float *T,float x,float(*f)(float))
{
	float m=0;
	int i;
	for (i=0;i<4;i++)
	{
		m=m+f(T[i])*Polylagrange(T,x,i);
	}	
	return m;
}


int main()
{
	float T[]={2,5,1,9};
	float a=Interplagrange(T,5,f);
	printf("%f",a);
	return 0;
}
