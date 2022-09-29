#include <stdio.h>
#include <ctype.h>
int main() {
	
	char a[10];
	while(scanf("%s",a)!=EOF)
	{
		int i=0;
		while(a[i]!='\0'){
			if(isupper(a[i])){
				printf("%c",((a[i]-'A'+16)%26+'A'));
			}
			else{
				printf("%c",((a[i]-'a'+16)%26+'a'));
			}
			i++;
		}
		printf("\n");
	}
	
	
}

