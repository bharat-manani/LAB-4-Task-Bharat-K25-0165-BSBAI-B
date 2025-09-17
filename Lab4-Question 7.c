#include <stdio.h>
int main(){
	int age;
	float price;
	float total;
	printf("Enter the age: ");
	scanf("%d",&age);
	
	if(age<12){
			total= price-1.00;
		printf("Discout available total%.2f:",total);
	}
	else{
		printf("No deduction ");
	}	return 0;

}
