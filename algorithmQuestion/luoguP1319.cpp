#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("1.txt","w");
	if(fp==NULL)
		printf("´ò¿ªÊ§°Ü");
	char c;
	do
	{
		scanf("%c",&c);
		putc(c,fp);
	}while(c!='#');
	char ch[100];
	fscanf(fp,"%s",&ch);
	printf("%s",ch);
	fclose(fp);
	return 0;
	
 } 
