#include <stdio.h>
int main(){
	int input;
	printf(" Please choose the ice-cream flavor: \n1. Vanilla, \n2. Chocolate, \n3. Strawberry,\n Your Choice: ");
	scanf("%d",&input);
	if(input==1){
		printf("Vanilla flavor");
	}
	else if (input==2){
		printf("Chocolate flavor");
	}
		else if (input==3){
		printf("Strawberry flavor");
	}
		else{ 
		printf("Invalid flavor");
		}
	return 0;
	
}
