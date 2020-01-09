#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 256 // Maximum characters allowed
int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0, max;
    int ascii;
    int key;
    do{
    printf("Enter a string: ");
    gets(str);
    /* Initializes frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }
    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    // count times appear of every character in string
	for( i=65;i<122;i++)
	{
		if(freq[i]!=0)
		printf("'%c' : %d\n",i,freq[i]);
	}
	   /* Finds maximum frequency */
    max = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }
	printf("-------------------------------\n");
	printf("characters most appear\n");
	for( i=0;i<256;i++){
		if (freq[i]==freq[max])
		printf("ki tu '%c': %d times\n",i,freq[max]);
	}
	printf("\nEnter to continue");
	printf("\nEsc to exit!");
	key=getch();
	}while(key!=27);
    return 0;
}