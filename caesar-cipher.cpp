#include <stdio.h>
#include <ctype.h>
int main() {
	
	char a[10];
	int key;
	printf("��J�첾�q:");
	scanf("%d",&key);
	fflush(stdin);//�M�Žw�İϸ�� 
	printf("%d",key);//�첾�q 
	printf("��J�r�����[/�ѱK"); 
	while(scanf("%s",a)!=EOF)
	{
		int i=0;
		while(a[i]!='\0'){
			if(isupper(a[i])){//�q�r��v�@���X�r�����첾 
				printf("%c",((a[i]-'A'+key)%26+'A'));//���X�bA~Z�����O�ĴX�Ӧr���A�A�[�W�첾�qmod 26�A�קK�W�X26�A�̫��s�X�[�^�h 
			}
			else if(islower(a[i])) {
				printf("%c",((a[i]-'a'+key)%26+'a'));
			}
			else{
				printf("���O�r��");
			}
			i++;
		}
		printf("\n");
	}
	
	
}

