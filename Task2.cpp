#include <stdio.h>
#include <string.h>

/*fertig*/

int evenSum(int numbers[], int i)
{
	int n;
	int sum=0;
	for (n=0; n<i; n++){
		if (numbers[n]%2==0){
			sum += numbers[n];
		}
	}
	return sum;
}

int oddSum(int numbers[], int i)
{
	int n;
	int sum=0;
	for (n=0; n<i; n +=1){
		if ((numbers[n])%2!=0){
			sum += numbers[n];
		}
	}
	return sum;
}

int main() {
	
	int a[100];
	int i=0;
	printf("Enter values seperated by spaces (non-number to stop): \n");

	while(scanf("%d", a+i) == 1){
		i++;
	}
	
	int sum_of_even = evenSum(a,i);
	int sum_of_odd = oddSum(a,i);
	printf("Sum of Even: %d\n", sum_of_even);
	printf("Sum of Odd: %d\n", sum_of_odd);
		
	if (sum_of_even > sum_of_odd) {
		printf("Largest sum: even");
	}
		
	if (sum_of_even < sum_of_odd) {
		printf("Largest sum: odd");
	}
	if (sum_of_even == sum_of_odd) {
		printf("Largest sum: even and odd");
		}
	return 0;
	

}
