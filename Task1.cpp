#include <stdio.h>
#include <string.h>

/*fertig*/

int isSubstring(char str1[], char str2[]);

int main() {
	char str1[100];
	char str2[100];
	printf("Enter the first string: \n");
	scanf("%s", str1);
	printf("Enter the second string: \n");
	scanf("%s", str2);
	int result = isSubstring(str1, str2);
	return 0;
	
}

int isSubstring(char str1[], char str2[]){
	printf("Is Substring: ");
	int i = 0;
	int j = 0;
	int res = 0;
	while (i<strlen(str1) && j<strlen(str2)) {
		if (str1[i] == str2[j]){
			i++;
			j++;
			res = 1;
		}
		else {
			i = 0;
			j++;
			res = 0;
	    }
    }
    if (i != strlen(str1)){
	    res = 0;
	}
	if (res == 1){
		printf("True");
		
	}
	else{
		printf("False");
	}
}
