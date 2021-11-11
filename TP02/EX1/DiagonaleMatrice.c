#include <stdio.h>
#include <stdlib.h>
float **dia_m(float **A, int n)
{
	float **R =(float**) malloc(sizeof(float *)*n);
	int i = 0;
	while(i<1)
	{
		R[i]=(float*)malloc(sizeof(float)*2);
		i++;
	}
	i=0;
	while(i<n)
	{
		R[0][i]=A[i][i];
		R[1][i]=A[i][n-i-1];
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
	printf("entrer n: ");
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
	R=dia_m(A,n);
	for (i=0;i<1;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%f",R[i][j]);
			printf("\n");
		}
	}
	return 0;
}
