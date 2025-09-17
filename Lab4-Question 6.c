#include <stdio.h>
int main()
{
	int weekend;
	int s_day=6, day=7;
	
    printf("What day it is ('Monday-Sunday')\nInput Day Number:'1-7'\nDay#");
    scanf("%d",&weekend);
	if(weekend==s_day)
	{
		printf("Discount available 10 percent on total");
	}
	else if(weekend==day){
			printf("Discount available 10 percent on total");
		printf("Discount '10 perc' on total");
	}
	else{
		printf("No discount available");
	}
	return 0;
	
}
