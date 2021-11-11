#include <stdio.h>
#include <stdlib.h>
float **sum_m(float **A,float **B,int n)
{
	float **R;
	int i;
	int j;
	R=(float**)malloc(sizeof(float*)*n);
	while (i<n)
	{
		R[i]=(float*)malloc(sizeof(float)*n);
		j=0;
		while (j<n)
		{
			R[i][j]=A[i][j]+B[i][j];
			j++;
		}
		i++;
	}
	return R;
}



int main()
{
	float **A;
	float **B;
	float **R;
	int i;
	int j;
	int n;
	printf("taper n: ");
	scanf("%d",&n);
	A=(float**)malloc(sizeof(float*)*n);
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
	i=0;
	B=(float**)malloc(sizeof(float*)*n);
	while(i<n)
	{
		B[i]=(float*)malloc(sizeof(float)*n);
		j=0;
		while(j<n)
		{
			printf("entrer un  nombre : ");
			scanf("%f",&B[i][j]);
			j++;
		}
		i++;
	}
	R=sum_m(A,B,n);
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
