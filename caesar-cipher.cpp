#include <stdio.h>
#include <ctype.h>
int main() {
	
	char a[10];
	int key;
	printf("輸入位移量:");
	scanf("%d",&key);
	fflush(stdin);//清空緩衝區資料 
	printf("%d",key);//位移量 
	printf("輸入字母做加/解密"); 
	while(scanf("%s",a)!=EOF)
	{
		int i=0;
		while(a[i]!='\0'){
			if(isupper(a[i])){//從字串逐一取出字元做位移 
				printf("%c",((a[i]-'A'+key)%26+'A'));//取出在A~Z中的是第幾個字母，再加上位移量mod 26，避免超出26，最後把編碼加回去 
			}
			else if(islower(a[i])) {
				printf("%c",((a[i]-'a'+key)%26+'a'));
			}
			else{
				printf("不是字母");
			}
			i++;
		}
		printf("\n");
	}
	
	
}

