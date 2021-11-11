#include <stdio.h>
#include <stdlib.h>

float **mult_m(float **A,float **B,int n)
{
	int i,j,k;
	float **R;
	R=(float**)malloc(sizeof(float*)*n);
	for (i=0 ; i<n ; i++)
	{
		R[i]=(float*)malloc(sizeof(float)*n);
    	for(j=0;j<n;j++)
    	{
      		R[i][j]=0;
      		for(k = 0; k < n; k++)
      			{
        			R[i][j] += A[i][k] * B[k][j];
      			}
    	}
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
	R=mult_m(A,B,n);
	i=0;
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
