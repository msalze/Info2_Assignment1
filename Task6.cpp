#include <stdio.h>
#include <string.h>
/*fertig*/

int power(int base, int exponent){
	
	if (exponent == 0){
		return 1;
	}
	if (exponent == 1){
		return base;
	}
	
	int r;
	r= base * power(base, exponent-1);
	return r;
	
}

int main(){
	printf("Enter the base: ");
	int b;
	scanf("%d",&b);
	printf("Enter the exponent: ");
	int e;
	scanf("%d",&e);
	
	int r;
	r = power(b,e);
	printf("Result: %d",r);
}
