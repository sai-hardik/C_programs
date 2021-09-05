// Enumerations are actually used to 
//restrict the values to a set of integers within the 
//range of values. But outside the range, 
//if any value is used it is not an error in C standards 
//like C11, C99 and C89. Other languages(ex: Java) doest 
//support any value outside the range
// example to demonstrate why enum supports values outside range values in C

#include<stdio.h>
enum design_flags
{
	bold =1,
	italics=4,
	underline=8
}df;
int main()
{
	df=bold;
	df=italics|bold;	// to set bold and italics. Now df contains 5 which is not defined in enum
	// if you write again df=italics, 5 is replaced with 4. So text is no more bold. It is only italics
	if(df==(bold|italics))
		printf("both\n");
	else if(df==bold)
		printf("bold it is\n");
	else if(df==italics)
		printf("italics it is\n");
		
		
	if(df&bold)			// whether the text is bold
		printf("bold\n");
		
	if(df & italics)	// whether the text is italics
		printf("italics\n");
				
	
	if(df & underline)		// whether the text is underlined
		printf("underline\n");
	return 0;
}