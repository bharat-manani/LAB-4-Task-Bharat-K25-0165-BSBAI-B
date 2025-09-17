#include <stdio.h>
int main(){
	int scoops;
	printf("How many scoops do you want: ");
	scanf("%d",&scoops);
	if(scoops>1){
		printf("Please see our multi-scoop offers: ");}
		else{
			printf("Your total is $2.00.");
		}
	return 0;
}
