#include <stdio.h>
#include <string.h>

/*fertig*/

void sequence(int n){
	if (n==1){
		printf("%d ", n);
		return;
	}
	if (n%2==0){
		printf("%d ", n);
		sequence((int)(n/2));
	}
	if (n%2==1){
		printf("%d ", n);
		sequence((int)(3*n+1));
	}
	
}

int main(){
	printf("Enter the first sequence number: ");
	int n;
	scanf("%d", &n);
	printf("Sequence: ");
	sequence(n);
	return 0;
	
}
