#include <stdio.h>


void check_msb ( int NUM )
{
	int bits=sizeof(int) * 8;
	if(NUM & (1<<(bits-1)))
		printf("msb is SET in number %d.\n",NUM);
	else
		printf("msb is not SET in number %d.\n",NUM);
		
    		

}








int main()
{
	int NUM; //to store number
	printf("Enter an 8 bits integer number: ");
	scanf("%d",&NUM);
	//checking bit status
	check_msb(NUM);
	
	return 0;	
}
