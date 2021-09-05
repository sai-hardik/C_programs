//io stream
#include<stdio.h>
int main () 
{ 
	char c;
	printf("Enter a char: ");
	c = getc(stdin);
	printf("Entered char: ");
	putc(c,stdout);
	printf("\nEnter text: ");
	while((c = getc(stdin)) != EOF)
	{
		putc(c,stdout);
	}
	return 0; 
}

