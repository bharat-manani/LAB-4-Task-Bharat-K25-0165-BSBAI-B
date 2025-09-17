#include <stdio.h>
int main()
{
	float r_type=0.50;
	float w_type=1.00;
	int input;
printf("Choose your Cone type. (1 or 2) \n1. Regular Cone: 1\n2. Waffle Cone: 2 :");
scanf("%d",&input);
if(input==1)
{
	
	printf("\nTotal amount is : %.2f",r_type);
}
else if (input==2)
{
	printf("\nTotal amount is : %.2f",w_type);
}

	return 0;
}
