#include <stdio.h>
#include <string.h>

int compare(char a, char b){
	/*
	returns -1 if a precedes b in sorted result
	returns 1 if a succeeds b
	returns 0 otherwise 
	*/
	if (a==b){
		return 0;
	}
	if ((a>91 && a-32 == b)|| (b>91 && b-32==a)) {
		if (a>b){
			return 1;
		}
		else{
		return -1;
		}
	}
	if (a>b) {
		return 1;
	}
	if (a<b) {
		return -1;
	}
}


void bubblesort(char a[], int n){
	
	int i,j,t;
	for (i=n-1; i>0; i--){
		for (j=0; j<i;j++){
			if (compare(a[j], a[j+1])==1){
				t= a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}


int isAnagram(char a[], char b[]){
	int lena = strlen(a);
	int lenb = strlen(b);
	
	if (lena != lenb){
		return 0;
	}
	
	bubblesort(a,lena);
	bubblesort(b,lenb);
	
	for (int i=0; i<lena; i++){
		if (a[i] != b[i]){
			return 0;
		}
	}
	return 1;
}


int main(){
	char a[100];
	printf("Enter a string to sort: ");
	scanf("%s", a);
	int n = strlen(a);
		
	bubblesort(a,n);
		
	
	printf("Sorted String: %s\n", a);
	
	printf("\nEnter the first string: ");
    char b1[100];
    scanf("%s", b1);
    int nb1 = strlen(b1);
    
    
    printf("Enter the second string: ");
    char b2[100];
    scanf("%s", b2);
    int nb2 = strlen(b2);

    if(isAnagram(b1, b2) == 1){
	printf("Is Anagram : True\n");
    }else{
	printf("Is Anagram : False\n");
    }

    return 0;
}


