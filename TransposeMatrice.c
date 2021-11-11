#include <stdio.h>
#include <stdlib.h>

float **trans_m(float **A,int n)
{
	float **R;
	int i;
	int j;
	R=(float**)malloc(sizeof(float*)*n);
	i=0;
	while (i<n)
	{
		R[i]=(float*)malloc(sizeof(float)*n);
		j=0;
		while (j<n)
		{
			R[i][j]=A[j][i];
			j++;
		}
		i++;
	}
	return R;	
}

int main()
{
	float **A;
	float **R;
	int n;
	int i;
	int j;
	printf("taper n: ");
	scanf("%d",&n);
	A=(float**)malloc(sizeof(float*)*n);
	i=0;
	while(i<n)
	{
		A[i]=(float*)malloc(sizeof(float)*n);
		j=0;
		while(j<n)
		{
			printf("entrer un  nombre : ");
			scanf("%f",&A[i][j]);
			j++;
		}
		i++;
	}
	R=trans_m(A,n);
	i=0;
	j=0;
	while (i<n)
	{
		j=0;
		while (j<n)
		{
			printf("%f \n",R[i][j]);
			j++;
		} 
		i++;
	}
	return 0;
}
