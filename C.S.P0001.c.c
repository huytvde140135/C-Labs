#include<stdio.h>
#include<string.h>
int main()
{
	//Declare
	char str[200];
	int i,key;
	do
	{
		// Input 1 string
		printf("\nInput a string: ");
		gets(str);
		printf("Reverse string :");
		// Reverse string
		for (i=strlen(str)-1;i>=0;i--)
		{
			if(str[i]==' ')
			{
				str[i]='\0';
				printf("%s ",&str[i]+1);
			}
		}
		printf("%s",str);
		printf("\nEnter to continue");
		printf("\nEsc to exit!");
		key=getch();
	}while(key!=27);
	
}
