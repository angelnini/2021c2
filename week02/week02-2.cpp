#include <stdio.h>
#include <string.h>
char line[1000];
int palinerome()
{
	int n=strlen(line);
	for(int i=0; i<n; i++){
		if (line[i] != line[n-1-i]) return 0;
	}
	return 1;
}
int main()
{
	while(scanf("%s",line)==1){
		int p=palinerome();
		if (p==1) printf("is a regular palindrome.\n");
		if (p==0) printf("is not a palindrome.\n");
	}
}
