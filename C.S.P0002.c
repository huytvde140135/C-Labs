#include <stdio.h>
#include <string.h>
int main()
/*Delaire*/
{
	char s[100];
	int i,a;
	int key;
	char *decima[]={ "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
	char *tens_place[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
	do
	{
	printf("\nEnter a number from 0 to 9999: ");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++)
	{
		/* - idea:Use the switch to distinguish rows (thousands, hundreds, tens and units respectively a=4,3,2,1)*/
		a=strlen(s)-i;
		switch(a)
		{
			case 4:	if (s[i]!='0') printf("%s thousand, ",decima[s[i]-'0']);
					break;
			case 3: if (s[i]!='0') printf("%s hundred,",decima[s[i]-'0']);
					break;
			case 2: if (s[i]=='1') printf("%s ",tens_place[s[i+1]-'0']);
					if (s[i]!='1'&&s[i]!='0') printf("%s ",tens_multiple[s[i]-'0']);
					break;
			case 1: if (s[i-1]!='1'&&s[i]!='0')
					printf("%s",decima[s[i]-'0']);
					if (s[i]=='0') printf("%s",decima[s[i]-'0']);
					break;
			default: break;
			
		}
	}
	printf("\nEnter to continue");
	printf("\nEsc to exit!");
	key=getch();
}while(key!=27);
}
