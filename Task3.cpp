#include <stdio.h>
#include <string.h>

/* fertig */
int isPrime(int a){
	int i=2;
	int possible[1000];
	for (i; i<a^(1/2); i+=1){
		if (a%i==0){
			return 0;
		}
	}
	return 1;
	
}

int main() {
	int a[100];
	int i=0;
	printf("Enter values seperated by spaces (non-number to stop):\n");
	while(scanf("%d", a+i) == 1){
		i++;
	}
	
	int n=0;
	printf("Prime numbers: \n");
	for (n;n<=i;n++ ) {
		if (isPrime(a[n])==1){
			printf("%d \n", a[n]);
		}
	}
	
	
	return 0;
}
