#include <stdio.h>
int main()
{
	int scoops_number;
	printf("How many scoops do you want (1, 2, or 3)\nScoops Number:");
	scanf("%d",&scoops_number);
	if(scoops_number==1){
		printf(" The cost of 1 scoop is $2.00");
	}
	else if(scoops_number==2){
		printf(" The cost of 2 scoops is $3.50");
	}
else if(scoops_number==3) {
		printf("The cost of 3 scoops is $4.50");
	}
	return 0;
}
