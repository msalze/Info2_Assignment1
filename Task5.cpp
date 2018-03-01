#include <stdio.h>
#include <string.h>

/*fertig*/

void efficientSort(int a[], int n){
	int i,j,k,t;
	for (i=n-1; i>1; i--){
		for (j=0; j<i;j++){
			if (a[j]>a[j+1]){
				t= a[j];
				a[j] = a[j+1];
				a[j+1] = t;
		    }
		    int k = i;
			if (a[k]<a[k-1]){
				t= a[k];
				a[k] = a[k-1];
				a[k-1] = t;
			}
			k--;
		
		}
	}
}

int main(){
	int a[100];
	int i=0;
	printf("Enter values seperated by spaces (non-number to stop)");
	while(scanf("%d", a+i) == 1){
		i++;
	}
	
	efficientSort(a,i);
	
	int n;
	for (n=0; n<i; n++){
		printf("%d ", a[n]);
	}
	
	return 0;
}
