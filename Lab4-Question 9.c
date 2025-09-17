#include <stdio.h>
int main(){
	int method;
	printf("Which payment method you choose (1.Card, 2.Cash)\nMethod (1,2) : ");
	scanf("%d",&method);
	if(method==1){
		printf("Processing fee is $0.50 deduct it from total");
}
else{printf("No processing fee ");
}
return 0;
}
