#include <stdio.h>
#include <stdlib.h>


float Polylagrange(float *T,float x,int i)
{
	float m=1;
	int j=0;
	while (j<3)
	{
		j++;
		if (i!=j)
		{
			m=m*((x-T[j])/(T[i]-T[j]));
		}
	}
	return m;
}

int main()
{
	float T[]={-1,0,3};
	float a=Polylagrange(T,2,0);
	printf("%f",a);
	return 0;
}
